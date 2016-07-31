//======================================================================
// File:		dmm.cpp
// Author:	Matthias Toussaint
// Created:	Tue Apr 10 15:10:29 CEST 2001
//----------------------------------------------------------------------
// This file is part of QtDMM.
//
// QtDMM is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 3
// as published by the Free Software Foundation.
//
// QtDMM is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
//----------------------------------------------------------------------
// Copyright (c) 2001 Matthias Toussaint
//======================================================================

#include <dmm.h>
#include <unistd.h>
#include <errno.h>
#include <qapplication.h>
//Added by qt3to4:
#include <QCustomEvent>
#include <QTimerEvent>
#include <QEvent>

#include <stdio.h>

#include <iostream>
#include <qdatetime.h>
#include <math.h>

#define LOG_OUTPUT

DMM::DMM( QObject *parent, const char *name ) :
  QObject( parent, name ),
  m_baud( BAUD600 ),
  m_parity( PAR_NONE ),
  m_device( "/dev/ttyS0" ),
  m_oldStatus( ReaderThread::NotConnected ),
  m_consoleLogging( false ),
  m_externalSetup( false )
{
  m_readerThread = new ReaderThread( this );
  
  // mt: QThread emits a signal now. no more custom event
  connect( m_readerThread, SIGNAL(readEvent(const QByteArray &, int, ReadEvent::DataFormat)),
	   this, SLOT(readEventSLOT(const QByteArray &, int, ReadEvent::DataFormat)));
  
  m_readerThread->start();
}

DMM::~DMM()
{
}

void
DMM::setPortSettings( DataBitsType bits, StopBitsType stopBits, ParityType parity, bool externalSetup, bool rts, bool dtr )
{
  m_externalSetup = externalSetup;
  m_parity  = parity;
  m_rts = rts;
	m_dtr = dtr;
  m_stopBits = stopBits;
	m_bits = bits;
}

void
DMM::setFormat( ReadEvent::DataFormat format )
{
  m_readerThread->setFormat( format );
}

void
DMM::setBaud( BaudRateType baud )
{
  m_baud = baud;
}

void
DMM::setDevice( const QString & device )
{
  m_device = device;
}

bool
DMM::open()
{
	/*
  m_error = tr( "Connecting ..." );
  emit error( m_error );
  */
	
  if (!m_readerThread->open( m_device, m_baud, m_parity, m_bits, m_stopBits, m_rts, m_dtr ))
	{
		m_error = tr( "Not connected" );
		emit error( m_error );
		return false;
	}
	
  timerEvent( 0 );
  
  // mt: added timer id
  m_delayTimer = startTimer( 1000 );
  
	m_error = tr( "Connected" );
	emit error( m_error );
		
  return true;
}

void
DMM::close()
{
  // mt: added timer id
  killTimer(m_delayTimer);
  
  m_error = tr( "Not connected" );
  emit error( m_error );
  
  m_readerThread->close();
  
  m_oldStatus = ReaderThread::NotConnected;
}

void
DMM::timerEvent( QTimerEvent * )
{
  if (!m_readerThread->isOpen())
  {
    emit error( m_error );
  }
  else
  {
    m_readerThread->startRead();
  }
}

// mt: removed the QCustomEvent. As QThread can emit signals in Qt4
// I've changed it into a signal
void
DMM::readEventSLOT( const QByteArray & data, int id, ReadEvent::DataFormat df )
//DMM::customEvent( QCustomEvent *ev )
{
  //if (QEvent::User == ev->type())
  {
    if (ReaderThread::Ok == m_readerThread->status())
    {
      //ReadEvent *re = (ReadEvent *)ev;
      
      if (m_consoleLogging)
      {
        for (int i=0; i<data.size(); ++i)
        //for (int i=0; i<re->length(); ++i)
        {
          fprintf( stdout, "%02X ", data[i] & 0x0ff );
          //fprintf( stdout, "%02X ", re->string()[i] & 0x0ff );
        }
        fprintf( stdout, "\n" );
      }

      switch (df)
      {
      case ReadEvent::Metex14:
      case ReadEvent::PeakTech10:
      case ReadEvent::Voltcraft14Continuous:
      case ReadEvent::Voltcraft15Continuous:
        readASCII( data, id, df );
        //readASCII( re );
        break;
      case ReadEvent::M9803RContinuous:
        readM9803RContinuous( data, id, df );
        //readM9803RContinuous( re );
        break;
      case ReadEvent::VC820Continuous:
        readVC820Continuous( data, id, df );
        //readVC820Continuous( re );
        break;
      case ReadEvent::IsoTech:
        readIsoTechContinuous( data, id, df );
        //readIsoTechContinuous( re );
        break;
      case ReadEvent::VC940Continuous:
        readVC940Continuous( data, id, df );
        //readVC940Continuous( re );
        break;
      case ReadEvent::QM1537Continuous:
        readQM1537Continuous( data, id, df );
        //readQM1537Continuous( re );
        break;
      case ReadEvent::RS22812Continuous:
        readRS22812Continuous( data, id, df );
        //readRS22812Continuous( re );
        break;
      case ReadEvent::DTM0660Continuous:
        readDTM0660Continuous( data, id, df );
        //readDTM0660Continuous( re );
        break;
      }
    }
    else
    {
      if (ReaderThread::Error == m_readerThread->status())
      {
        m_error = tr( "Read error on device" );
        m_error += " ";
        m_error += m_device;
        m_error += ". ";
        m_error += tr( "DMM connected and switched on?" );
      }
      else if (ReaderThread::Timeout == m_readerThread->status())
      {
        m_error = tr( "Timeout on device" );
        m_error += " ";
        m_error += m_device;
        m_error += ". ";
        m_error += tr( "DMM connected and switched on?" );
      }
      else if (ReaderThread::NotConnected == m_readerThread->status())
      {
        m_error = tr( "Not connected" );
      }
    }
    if (m_oldStatus != m_readerThread->status())
    {
      emit error( m_error );
    }
    m_oldStatus = m_readerThread->status();
  }
}

QString
DMM::insertComma( const QString & val, int pos )
{
  return val.left(2+pos) + "." + val.right(4-pos);
}

QString 
DMM::insertCommaIT( const QString & val, int pos )
{
  QString res;
  if (val[0] == '-' || val[0] == ' ')
  {
    res = val.left(pos+1) + "." + val.mid(pos+1);
  }
  else
  {
    res = val.left(pos) + "." + val.mid(pos);
  }
  
  return res;
}

void
DMM::setName( const QString & name )
{
  m_name = name;
}

void
DMM::setNumValues( int numValues )
{
  m_readerThread->setNumValues( numValues );
}

void DMM::readVC940Continuous( const QByteArray & data, int id, ReadEvent::DataFormat /*df*/ )
{
  QString val = " ";
  QString special;
  QString unit;
  
  QString str(data);
  
  double scale = 1.0;
  
  int function = data[6] & 0x0f;
  int range    = data[5] & 0x0f;
  int mode     = data[7];
  int mode2    = data[8];
  
  if (function != 12 && mode2 & 0x04) val = "-";

  for (int i=0; i<4; ++i)
  {
    val += str[i];
  }
  if (data[4] != 'A')
  {
    val += str[4];
  }
  
  switch (function)
  {
    case 0:
      val = insertCommaIT( val, 3 );
      special = "AC";
      unit = "mV";
      scale = 1e-3;
      break;
    case 1:
      val = insertCommaIT( val, range );
      special = "DC";
      unit = "V";
      break;
    case 2:
      val = insertCommaIT( val, range );
      special = "AC";
      unit = "V";
      break;
    case 3:
      val = insertCommaIT( val, 3 );
      special = "DC";
      unit = "mV";
      scale = 1e-3;
      break;
    case 4:
      unit = "Ohm";
      switch (range)
      {
        case 1:
          val = insertCommaIT( val, 3 );
          break;
        case 2:
          val = insertCommaIT( val, 1 );
          unit = "kOhm";
          scale = 1e3;
          break;
        case 3:
          val = insertCommaIT( val, 2 );
          unit = "kOhm";
          scale = 1e3;
          break;
        case 4:
          val = insertCommaIT( val, 3 );
          unit = "kOhm";
          scale = 1e3;
          break;
        case 5:
          val = insertCommaIT( val, 1 );
          unit = "MOhm";
          scale = 1e6;
          break;
        case 6:
          val = insertCommaIT( val, 2 );
          unit = "MOhm";
          scale = 1e6;
          break;
      }
      special = "OH";
      break;
    case 5:
      unit = "F";
      switch (range)
      {
        case 1:
          val = insertCommaIT( val, 2 );
          unit = "nF";
          scale = 1e-9;
          break;
        case 2:
          val = insertCommaIT( val, 3 );
          unit = "nF";
          scale = 1e-9;
          break;
        case 3:
          val = insertCommaIT( val, 1 );
          unit = "uF";
          scale = 1e-6;
          break;
        case 4:
          val = insertCommaIT( val, 2 );
          unit = "uF";
          scale = 1e-6;
          break;
        case 5:
          val = insertCommaIT( val, 3 );
          unit = "uF";
          scale = 1e-6;
          break;
        case 6:
          val = insertCommaIT( val, 4 );
          unit = "uF";
          scale = 1e-6;
          break;
        case 7:
          val = insertCommaIT( val, 2 );
          unit = "mF";
          scale = 1e-3;
          break;
      }
      special = "CA";
      break;
    case 6:
      special = "TE";
      unit = "C";
      val = insertCommaIT( val, 4 );
      break;
    case 7:
      if (mode & 0x01) 
      {
        // can't handle AC+DC
        special = "AC";
      }
      else special = "DC";
      switch (range)
      {
        case 0:
          val = insertCommaIT( val, 3 );
          break;
        case 1:
          val = insertCommaIT( val, 4 );
          break;
      }
      unit = "uA";
      scale = 1e-6;
      break;
    case 8:
      if (mode & 0x01) 
      {
        // can't handle AC+DC
        special = "AC";
      }
      else special = "DC";
      switch (range)
      {
        case 0:
          val = insertCommaIT( val, 2 );
          break;
        case 1:
          val = insertCommaIT( val, 3 );
          break;
      }
      unit = "mA";
      scale = 1e-3;
      break;
    case 9:
      if (mode & 0x01) 
      {
        // can't handle AC+DC
        special = "AC";
      }
      else special = "DC";
      val = insertCommaIT( val, 2 );
      unit = "A";
      break;
    case 10:   // buzzer
      special = "OH";
      unit = "Ohm";
      val = insertCommaIT( val, 3 );
      break;
    case 11:
      special = "DI";
      unit = "V";
      val = insertCommaIT( val, 1 );
      break;
    case 12:
      if (mode2 & 0x04)
      {
        special = "PC";
        unit = "%";
        val = insertCommaIT( val, 3 );
      }
      else
      {
        special = "FR";
        unit = "Hz";
        switch (range)
        {
          case 0:
            val = insertCommaIT( val, 2 );
            break;
          case 1:
            val = insertCommaIT( val, 3 );
            break;
          case 2:
            val = insertCommaIT( val, 1 );
            unit = "kHz";
            scale = 1e3;
            break;
          case 3:
            val = insertCommaIT( val, 2 );
            unit = "kHz";
            scale = 1e3;
            break;
          case 4:
            val = insertCommaIT( val, 3 );
            unit = "kHz";
            scale = 1e3;
            break;
          case 5:
            val = insertCommaIT( val, 1 );
            unit = "MHz";
            scale = 1e6;
            break;
          case 6:
            val = insertCommaIT( val, 2 );
            unit = "MHz";
            scale = 1e6;
            break;
          case 7:
            val = insertCommaIT( val, 3 );
            unit = "MHz";
            scale = 1e6;
            break;
        }
      }
      break;
    case 13:
      special = "TE";
      unit = "F";
      val = insertCommaIT( val, 4 );
      break;

  }
  
  double d_val = val.toDouble() * scale;
  
  //printf( "d_val=%f val=%s unit=%s special=%s\n", d_val, val.latin1(), unit.latin1(), special.latin1() );
  
  emit value( d_val, val, unit, special, true, id );

  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

void DMM::readRS22812Continuous( const QByteArray & data, int id, ReadEvent::DataFormat /*df*/ )
{
  QString val;
  QString special;
  QString unit;
  
  const char *in = data.data();
  
  if (m_consoleLogging)
  {
    for (int i=0; i<data.size(); ++i)
    {
      fprintf( stdout, "%02X ", in[i] & 0x0ff );
    }
    fprintf( stdout, "\n" );
  }
  
  // check for overflow else find sign and fill in digits
  //
  if (((in[3] & 0x0f7) == 0x000) && 
      ((in[4] & 0x0f7) == 0x027) && 
      ((in[5] & 0x0f7) == 0x0d7))
  {
    val = "   0L ";
  }
  else
  {
    if(in[7] & 0x08)
    {
      val = " -";   // negative;
    }
    else
    {
      val = "  ";
    }
    
    // create string;
    //
    for (int i=0; i<4; ++i)
    {
      val += RS22812Digit( in[6-i] );
    }
  }
  
  // find comma (really decimal point) [germans use commas instead of decimal points] position
  //
  if (in[3] & 0x08)
  {
    val = insertComma( val, 3 );
  }
  else if (in[4] & 0x08)
  {
    val = insertComma( val, 2 );
  }
  else if(in[5] & 0x08)
  {
    val = insertComma( val, 1 );
  }
  
  double d_val = val.toDouble();
  
  // try to find some special modes
  //
  if (in[7] & 0x40) 
  {
    special = "DI";
  }
  if (in[7] & 0x04)
  {
    special = "AC";
  }
  else
  {
    special = "DC";
  }
   
  // try to find mode
  //
  if (in[1] & 0x08)
  {
    unit    = "F";
    special = "CA";
  }
  else if (in[1] & 0x40)
  {
    unit    = "Ohm";
    special = "OH";
  }
  else if (in[1] & 0x04)
  {
    unit = "A";
  }
  else if (in[1] & 0x80)
  {
    unit    = "Hz";
    special = "HZ";
  }
  else if (in[1] & 0x02)
  {
    unit = "V";
  }
  else if (in[2] & 0x80)
  {
    unit    = "%";
    special = "PC";
  }
  else 
  {
    std::cerr << "Unknown unit!" << std::endl;
  }
  
  // try to find prefix
  //
  if (in[2] & 0x40)
  {
    d_val /= 1e9;
    unit.prepend( "n" );
  }
  else if (in[2] & 0x80)
  {
    d_val /= 1e6;
    unit.prepend( "u" );
  }
  else if (in[1] & 0x01)
  {
    d_val /= 1e3;
    unit.prepend( "m" );
  }
  else if (in[1] & 0x20)
  {
    d_val *= 1e3;
    unit.prepend( "k" );
  }
  else if (in[1] & 0x10)
  {
    d_val *= 1e6;
    unit.prepend( "M" );
  }
  
  emit value( d_val, val, unit, special, true, id );
  
  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

const char *DMM::RS22812Digit( int byte )
{
  int           digit[10] = { 0xd7, 0x50, 0xb5, 0xf1, 0x72, 0xe3, 0xe7, 0x51, 0xf7, 0xf3 };
  const char *c_digit[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
     
  byte &= 0x0f7;
     
  for (int n=0; n<10; n++)
  {
    if (byte == digit[n]) return c_digit[n];
  }
    
  return 0;
}

// mt: not using ReadEvent any more
void DMM::readASCII( const QByteArray & data, int id, ReadEvent::DataFormat df )
{
  QString val;
  QString special;
  QString unit;
  
  QString str(data);
  
  if (df == ReadEvent::Metex14 ||
      df == ReadEvent::Voltcraft14Continuous ||
      df == ReadEvent::Voltcraft15Continuous)
  {
    val     = str.mid( 2, 7 ); //.stripWhiteSpace();
    unit    = str.mid( 9, 4 ).stripWhiteSpace();
    special = str.left( 3 ).stripWhiteSpace();
  }
  else if (df == ReadEvent::PeakTech10)
  {
    val     = str.mid( 1, 6 ); //.stripWhiteSpace();
    unit    = str.mid( 7, 4 ).stripWhiteSpace();
  }

  double d_val = val.toDouble();

  //std::cerr << "d_val=" << d_val << " val=" << val.latin1() 
  //    << " unit=" << unit.latin1() << " special=" << special.latin1() << std::endl;
      
  if (unit.left(1) == "p")
  {
    d_val /= 1.0E12;
  }
  else if (unit.left(1) == "n")
  {
    d_val /= 1.0E9;
  }
  else if (unit.left(1) == "u")
  {
    d_val /= 1.0E6;
  }
  else if (unit.left(1) == "m")
  {
    d_val /= 1.0E3;
  }
  else if (unit.left(1) == "k")
  {
    d_val *= 1.0E3;
  }
  else if (unit.left(1) == "M")
  {
    d_val *= 1.0E6;
  }
  else if (unit.left(1) == "G")
  {
    d_val *= 1.0E9;
  }
        
  emit value( d_val, val, unit, special, true, id );

  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

void DMM::readQM1537Continuous( const QByteArray & data, int id, ReadEvent::DataFormat /*df*/ )
{
  QString val;
  QString special;
  QString unit;
  const char *pStr = data.data();
//  if (pStr[0]!=0x0A) goto error;

  if (pStr[0] == '-')
  {
    val = " -";
  }
  else if(pStr[0] == '+')
  {
    val = "  ";
  }
  else goto error;
  
  for(int i=1;i<4;i++)
  {
    if(pStr[i]<'0')
      goto error;
    if(pStr[i]>'9')
      goto error;
  }
  if(0)
  {
    error:
      printf("Data error!\n");
      return;
  }  
  
  if ((pStr[1] == ';') &&
      (pStr[2] == '0') &&
      (pStr[3] == ':') &&
      (pStr[4] == ';'))
  {
     val += "  0L";
  } 
  else
  {
    val += pStr[1];
    val += pStr[2];
    val += pStr[3];
    val += pStr[4];
  }
         
  bool showBar = true;
  bool doACDC = true;
  bool doUnits = true;
  
  switch (pStr[6])
  {
    case 0x31:
      val = insertComma (val,1);
      break;
    case 0x32:
      val = insertComma (val,2);
      break;
    case 0x34:
      val = insertComma (val,3);
      break;
    // default case is no comma/decimal point at all.
  }

  double d_val = val.toDouble();

  /* OK, now let's figure out what we're looking at. */
  if (pStr[10] & 0x80)
  {
    /* Voltage, including diode test */
    unit = "V";
    if (pStr[9] & 0x04)
    {
      /* Diode test */
      special = "DI";
      unit = "V";
    }
    else
      doACDC = true;
  }
  else if (pStr[10] & 0x40)
  {
    /* Current */
    unit = "A";
    doACDC = true;
  }
  else if (pStr[10] & 0x20)
  {
    /* Resistance, including continuity test */
    unit = "Ohm";
    special = "OH";
  }
  else if (pStr[10] & 0x08)
  {
    /* Frequency */
    unit = "Hz";
    special = "HZ";
  }
  else if (pStr[10 ] & 0x04)
  {
    /* Capacitance */
    unit = "F";
    special = "CA";
  }
  else if (pStr[9] & 0x02)
  {
    /* Duty cycle */
    unit = "%";
    special = "PC";
    doUnits = false;
  }

  if (doACDC)
  {
    if (pStr[7] & 0x08)
      special = "AC";
    else
      special = "DC";
  }

  if (doUnits)
  {
    if (pStr[8] & 0x02)
    {
      d_val /= 1e9;
      unit.prepend ('n');
    }
    else if (pStr[9] & 0x80)
    {
      d_val /= 1e6;
      unit.prepend ('u');
    }
    else if (pStr[9] & 0x40)
    {
      d_val /= 1e3;
      unit.prepend ('m');
    }
    else if (pStr[9] & 0x20)
    {
      d_val *= 1e3;
      unit.prepend ('k');
    }
    else if (pStr[9] & 0x10)
    {
      d_val *= 1e6;
      unit.prepend ('M');
    }
  }
   
  emit value( d_val, val, unit, special, showBar, id );
  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

void DMM::readM9803RContinuous( const QByteArray & data, int id, ReadEvent::DataFormat /*df*/ )
{
  QString val;
  QString special;
  QString unit;
  
  if (data[0] & 0x01)
  {
    val = "  0L";
  }
  else
  {
    val = data[0] == 0x08 ? " -" : "  ";
    val += QChar( '0'+data[4] );
    val += QChar( '0'+data[3] );
    val += QChar( '0'+data[2] );
    val += QChar( '0'+data[1] );
  }
        
  double d_val = val.toDouble();

  bool showBar = true;
        
  switch (data[5])
  {
    case 0x00:
      switch (data[6])
      {
        case 0x00:
          unit = "mV";
          val = insertComma( val, 3 );
          d_val /= 10000.;
          break;
        case 0x01:
          unit = "V";
          val = insertComma( val, 1 );
          d_val /= 1000.;
          break;
        case 0x02:
          unit = "V";
          val = insertComma( val, 2 );
          d_val /= 100.;
          break;
        case 0x03:
          unit = "V";
          val = insertComma( val, 3 );
          d_val /= 10.;
          break;
        case 0x04:
          unit = "V";
          break;
      }
      special = "DC";
      break;
    case 0x01:
      switch (data[6])
      {
        case 0x00:
          unit = "mV";
          val = insertComma( val, 3 );
          d_val /= 10000.;
          break;
        case 0x01:
          unit = "V";
          val = insertComma( val, 1 );
          d_val /= 1000.;
          break;
        case 0x02:
          unit = "V";
          val = insertComma( val, 2 );
          d_val /= 100.;
          break;
        case 0x03:
          unit = "V";
          val = insertComma( val, 3 );
          d_val /= 10.;
          break;
        case 0x04:
          unit = "V";
          break;
      }
      special = "AC";
      break;
    case 0x02:
      switch (data[6])
      {
        case 0x00:
          unit = "mA";
          val = insertComma( val, 1 );
          d_val /= 1000.;
          break;
        case 0x01:
          unit = "mA";
          val = insertComma( val, 2 );
          d_val /= 100.;
          break;
        case 0x02:
          unit = "mA";
          val = insertComma( val, 3 );
          d_val /= 10.;
          break;
      }
      special = "DC";
      break;
    case 0x03:
      switch (data[6])
      {
        case 0x00:
          unit = "mA";
          val = insertComma( val, 1 );
          d_val /= 1000.;
          break;
        case 0x01:
          unit = "mA";
          val = insertComma( val, 2 );
          d_val /= 100.;
          break;
        case 0x02:
          unit = "mA";
          val = insertComma( val, 3 );
          d_val /= 10.;
          break;
      }
      special = "AC";
      break;
    case 0x04:
      switch (data[6])
      {
        case 0x00:
          unit = "Ohm";
          val = insertComma( val, 1 );
          d_val /= 10.;
          break;
        case 0x01:
          unit = "kOhm";
          val = insertComma( val, 1 );
          d_val /= 1000.;
          break;
        case 0x02:
          unit = "kOhm";
          val = insertComma( val, 2 );
          d_val /= 100.;
          break;
        case 0x03:
          unit = "kOhm";
          val = insertComma( val, 3 );
          d_val /= 10.;
          break;
        case 0x04:
          unit = "kOhm";
          break;
        case 0x05:
          unit = "MOhm";
          val = insertComma( val, 2 );
          d_val /= 100.;
          break;
      }
      special = "OH";
      break;
    case 0x05:
      switch (data[6])
      {
        case 0x00:
          unit = "Ohm";
          val = insertComma( val, 3 );
          d_val /= 10.;
          break;
      }
      special = "OH";
      break;
    case 0x06:
      unit = "V";
      val = insertComma( val, 1 );
      d_val /= 1000.;
      special = "DI";
      break;
    case 0x08:
      unit = "A";
      val = insertComma( val, 2 );
      d_val /= 100.;
      special = "DC";
      break;
    case 0x09:
      unit = "A";
      val = insertComma( val, 2 );
      d_val /= 100.;
      special = "AC";
      break;
    case 0x0A:
      showBar = false;
      switch (data[6])
      {
        case 0x00:
          unit = "kHz";
          val = insertComma( val, 1 );
            //d_val /= 1000.;
          break;
        case 0x01:
          unit = "kHz";
          val = insertComma( val, 2 );
          d_val *= 10.;
          break;
        case 0x05:
          unit = "Hz";
          val = insertComma( val, 2 );
          d_val /= 100.;
          break;
        case 0x06:
          unit = "Hz";
          val = insertComma( val, 3 );
          d_val /= 10.;
          break;
      }
      special = "HZ";
      break;
    case 0x0C:
      switch (data[6])
      {
        case 0x00:
          unit = "nF";
          val = insertComma( val, 1 );
          d_val /= 1e12;
          break;
        case 0x01:
          unit = "nF";
          val = insertComma( val, 2 );
          d_val /= 1e11;
          break;
        case 0x02:
          unit = "nF";
          val = insertComma( val, 3 );
          d_val /= 1e10;
          break;
        case 0x03:
          unit = "uF";
          val = insertComma( val, 1 );
          d_val /= 1e9;
          break;
        case 0x04:
          unit = "uF";
          val = insertComma( val, 2 );
          d_val /= 1e8;
          break;
      }
      special = "CA";
      break;
  }
          
  emit value( d_val, val, unit, special, showBar, id );
  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

void DMM::readIsoTechContinuous(const QByteArray & data, int id, ReadEvent::DataFormat /*df*/) 
{
  QString tmp(data);
  QString val = tmp.mid(11,4);
  QString unit, special;
  const char* tmpstring = data.data();
  
  double d_val = val.toDouble();
  
  // Type of measurement
  int typecode = tmpstring[15] & 0xf;
  int rangecode = tmpstring[10] & 0xf;
  int acdccode = tmpstring[18] & 0xc;
  //  printf("ISO: value %s, type: %d, range: %d, ac/dc: %c\n", 
  //      re->string(), typecode, rangecode, acdccode == 0x8 ? 'D': 'A' );
  
  double multiplier = 1.0;
  
  switch(typecode) {
    case 0xb:
      // voltage
      if (rangecode < 4)
      rangecode += 5;
      rangecode -= 4;
      multiplier = pow(10, rangecode - 4);
      if (acdccode == 0x8) {
         special = "DC";
      } else {
         special = "AC";
      }
      switch (rangecode) {
        case 0:
          val = insertCommaIT(val, 3);
          unit = "mV";
          break;
        case 1:
          val = insertCommaIT(val, 1);
          unit = "V";
          break;
        case 2:
          val = insertCommaIT(val, 2);
          unit = "V";
          break;
        case 3:
          val = insertCommaIT(val, 3);
          unit = "V";
          break;
        case 4:
          unit = "V";
          break;
        default:
          // error
              ;
      }
      break;
    case 0x3:
      // resistance
      multiplier = pow(10,rangecode - 1);
      special = "OH";
      switch (rangecode) {
        case 0:
          val = insertCommaIT(val, 3);
          unit = "Ohm";
          break;
        case 1:
          val = insertCommaIT(val, 1);
          unit = "kOhm";
          break;
        case 2:
          val = insertCommaIT(val, 2);
          unit = "kOhm";
          break;
        case 3:
          val = insertCommaIT(val, 3);
          unit = "kOhm";
          break;
        case 4:
          val = insertCommaIT(val, 1);
          unit = "MOhm";
          break;
        case 5:
          val = insertCommaIT(val, 2);
          unit = "MOhm";
          break;
        default:
          // error
          ;
      }
      break;
   case 0x1:
      // diode
      multiplier = 0.001;
      val = insertCommaIT(val,1);
      unit = "V";
      break;
   case 0xd:
      // current micro
      multiplier = pow(10,rangecode - 7);
      special = "DC";
      if (rangecode == 0) {
        val = insertCommaIT(val,3);
        unit = "uA";
      } else {
        val = insertCommaIT(val,1);
        unit = "mA";
      }
      break;
   case 0x0:
      // current
      multiplier = pow(10,rangecode - 3);
      unit = "A";
      val = insertCommaIT(val,rangecode + 1);
      if (acdccode == 0x8) {
        special = "DC";
      } else {
        special = "AC";
      }
      break;
   case 0x2: 
      // frequency
      special = "HZ";
      multiplier = pow(10,rangecode);
      switch (rangecode) {
        case 0x0:
          val = insertCommaIT(val, 1);
          unit = "kHz";
          break;
        case 0x1:
          val = insertCommaIT(val, 2);
          unit = "kHz";
          break;
        case 0x2:
          val = insertCommaIT(val, 3);
          unit = "kHz";
          break;
        case 0x3:
          val = insertCommaIT(val, 1);
          unit = "MHz";
          break;
        case 0x4:
          val = insertCommaIT(val, 2);
          unit = "MHz";
          break;
        default:
          // error
          ;

      }
      break;
   case 0x6:
      // capacity
      special = "CA";
      multiplier = pow(10, rangecode - 12);
      switch (rangecode) {
        case 0x0:
          val = insertCommaIT(val, 1);
          unit = "nF";
          break;
        case 0x1:
          val = insertCommaIT(val, 2);
          unit = "nF";
          break;
        case 0x2:
          val = insertCommaIT(val, 3);
          unit = "nF";
          break;
        case 0x3:
          val = insertCommaIT(val, 1);
          unit = "uF";
          break;
        case 0x4:
          val = insertCommaIT(val, 2);
          unit = "uF";
          break;
        case 0x5:
          val = insertCommaIT(val, 3);
          unit = "uF";
          break;
        case 0x6:
          val = insertCommaIT(val, 1);
          unit = "mF";
          break;
        default:
          // error
          ;
      }
      break;
   default:
      // error - unknown type of measurement
      ;
   }
  d_val *= multiplier;

  if (tmpstring[16] & 0x01) {
    val = "  0L";
  }
  if (tmpstring[16] & 0x4) {
    d_val = - d_val;
    val = " -" + val;
  } else {
    val = "  " + val;
  }

 // printf ("DVAL: %f\n", d_val);

  emit value( d_val, val, unit, special, true, id );
  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

void DMM::readVC820Continuous( const QByteArray & data, int id, ReadEvent::DataFormat /*df*/ )
{
  QString val;
  QString special;
  QString unit;
    
  const char *in = data.data();
  
  // check for overload else find sign and fill in digits
  //
  if (((in[3] & 0x07) == 0x07) && 
      ((in[4] & 0x0f) == 0x0d) && 
      ((in[5] & 0x07) == 0x06) &&
      ((in[6] & 0x0f) == 0x08))
  {
    val = "  0L";
  }
  else
  {
    if(in[1] & 0x08)
    {
      val = " -";   // negative;
    }
    else
    {
      val = "  ";
    }
    
    // create string;
    //
    for (int i=0; i<4; ++i)
    {
      val += vc820Digit( ((in[1+2*i] << 4 ) & 0xf0) | (in[2+2*i] & 0x0f) );
    }
  }
  
  // find comma position
  //
  if (in[3] & 0x08)
  {
    val = insertComma( val, 1 );
  }
  else if (in[5] & 0x08)
  {
    val = insertComma( val, 2 );
  }
  else if(in[7] & 0x08)
  {
    val = insertComma( val, 3 );
  }

  double d_val = val.toDouble();
  
  // try to find some special modes
  //
  if (in[9] & 0x01) 
  {
    special = "DI";
  }
  if (in[0] & 0x08)
  {
    special = "AC";
  }
  else
  {
    special = "DC";
  }

  // try to find mode
  //
  if (in[11] & 0x08)
  {
    unit    = "F";
    special = "CA";
  }
  else if (in[11] & 0x04)
  {
    unit    = "Ohm";
    special = "OH";
  }
  else if (in[12] & 0x08)
  {
    unit = "A";
  }
  else if (in[12] & 0x02)
  {
    unit    = "Hz";
    special = "HZ";
  }
  else if (in[12] & 0x04)
  {
    unit = "V";
  }
  else if (in[10] & 0x04)
  {
    unit    = "%";
    special = "PC";
  }
  /* Can't find the reason for this any more
  else if (in[13] & 0x04)
  {
    unit    = "C";
    special = "TE";
  } 
  else if (in[13] & 0x02)
  {
    unit    = "F";
    special = "TE";
  }
  */
  else if (in[13] & 0x01)
  {
    unit    = "C";
    special = "TE";
  } 
  else 
  {
    std::cerr << "Unknown unit!" << std::endl;
  }

  // try to find prefix
  //
  if (in[9] & 0x04)
  {
    d_val /= 1e9;
    unit.prepend( "n" );
  }
  else if (in[9] & 0x08)
  {
    d_val /= 1e6;
    unit.prepend( "u" );
  }
  else if (in[10] & 0x08)
  {
    d_val /= 1e3;
    unit.prepend( "m" );
  }
  else if (in[9] & 0x02)
  {
    d_val *= 1e3;
    unit.prepend( "k" );
  }
  else if (in[10] & 0x02)
  {
    d_val *= 1e6;
    unit.prepend( "M" );
  }

  emit value( d_val, val, unit, special, true, id );
  
  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

void DMM::readDTM0660Continuous( const QByteArray & data, int id, ReadEvent::DataFormat /*df*/ )
//void DMM::readDTM0660Continuous(const QByteArray&, int, ReadEvent::DataFormat /*df*/ )
// void DMM::DTM0660Continuous( const QByteArray & data, int id, ReadEvent::DataFormat  )
{
  QString val;
  QString special;
  QString unit;
    
  const char *in = data.data();
  
  // check for overload else find sign and fill in digits
  //
  if (((in[3] & 0x0e) == 0x0e) && 
      ((in[4] & 0x0f) == 0x0b) && 
      ((in[5] & 0x0e) == 0x06) &&
      ((in[6] & 0x0f) == 0x01))
  {
    val = "  0L";
  }
  else
  {
    if(in[1] & 0x01)
    {
      val = " -";   // negative;
    }
    else
    {
      val = "  ";
    }
    
    // create string;
    //
    for (int i=0; i<4; ++i)
    {
      val += DTM0660Digit( ((in[1+2*i] & 0x0f) <<4) | (in[2+2*i] & 0x0f));
    }
  }
  
  // find comma position
  //
  if (in[3] & 0x01)
  {
    val = insertComma( val, 1 );
  }
  else if (in[5] & 0x01)
  {
    val = insertComma( val, 2 );
  }
  else if(in[7] & 0x01)
  {
    val = insertComma( val, 3 );
  }

  double d_val = val.toDouble();
  
  // try to find some special modes
  //
  if (in[9] & 0x08) 
  {
    special = "DI";
  }
  if (in[0] & 0x01)
  {
    special = "AC";
  }
  if (in[0] & 0x02)
  {
    special = "DC";
  }

  // try to find mode
  //
  if (in[11] & 0x01)
  {
    unit    = "F";
    special = "CA";
  }
  else if (in[11] & 0x02)
  {
    unit    = "Ohm";
    special = "OH";
  }
  else if (in[12] & 0x08)
  {
    unit = "A";
  }
  else if (in[12] & 0x04)
  {
    unit    = "Hz";
    special = "HZ";
  }
  else if (in[12] & 0x02)
  {
    unit = "V";
  }
  else if (in[10] & 0x02)
  {
    unit    = "%";
    special = "PC";
  }

  else if (in[13] & 0x02)
  {
    unit    = "C";
    special = "TE";
  } 
  else if (in[13] & 0x01)
  {
    unit    = "F";
    special = "TE";
  }
/*
  else if (in[13] & 0x01)
  {
    unit    = "C";
    special = "TE";
  }
*/
 
  else 
  {
    std::cerr << "Unknown DTM0660 unit!" << std::endl;
  }

  // try to find prefix
  //
  if (in[9] & 0x02)
  {
    d_val /= 1e9;
    unit.prepend( "n" );
  }
  else if (in[9] & 0x01)
  {
    d_val /= 1e6;
    unit.prepend( "u" );
  }
  else if (in[10] & 0x01)
  {
    d_val /= 1e3;
    unit.prepend( "m" );
  }
  else if (in[9] & 0x04)
  {
    d_val *= 1e3;
    unit.prepend( "k" );
  }
  else if (in[10] & 0x04)
  {
    d_val *= 1e6;
    unit.prepend( "M" );
  }

  emit value( d_val, val, unit, special, true, id );
  
  m_error = tr( "Connected" ) + " (" + m_name + " @ " + m_device + ")";
}

const char *DMM::vc820Digit( int byte )
{
  int           digit[10] = { 0x7d, 0x05, 0x5b, 0x1f, 0x27, 0x3e, 0x7e, 0x15, 0x7f, 0x3f };
  const char *c_digit[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
  
  byte &= 0x7f;
  
  for (int n=0; n<10; n++)
  {
    if (byte == digit[n]) return c_digit[n];
  }
  
  return 0;
}

const char *DMM::DTM0660Digit( int byte )
{
  int           digit[10] = { 0xeb, 0x0a, 0xad, 0x8f, 0x4e, 0xc7, 0x67, 0x8a, 0xef, 0xcf };
  const char *c_digit[10] = { "0",  "1",  "2",  "3",  "4",  "5",  "6",  "7",  "8",  "9" };
  
  byte &= 0xef;
  
  for (int n=0; n<10; n++)
  {
    if (byte == digit[n]) return c_digit[n];
  }
      std::cerr << "Unknown DTM0660 byte " << byte << " " << std::endl;
  return 0;
}


