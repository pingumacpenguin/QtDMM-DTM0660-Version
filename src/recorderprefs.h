//======================================================================
// File:		recorderprefs.h
// Author:	Matthias Toussaint
// Created:	Sat Oct 19 14:34:19 CEST 2002
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
// Copyright (c) 2002 Matthias Toussaint
//======================================================================

#ifndef RECORDERPREFS_HH
#define RECORDERPREFS_HH

#include <uirecorderprefs.h>
#include <dmmgraph.h>

class RecorderPrefs : public UIRecorderPrefs
{
  Q_OBJECT
public:
  RecorderPrefs( QWidget *parent=0, const char *name=0 );
  virtual ~RecorderPrefs();
  
  DMMGraph::SampleMode sampleMode() const;
  int sampleStep() const;
  int sampleLength() const;
  double fallingThreshold() const;
  double raisingThreshold() const;
  QTime startTime() const;
  void setThreshold( double );
  
public slots:
  virtual void defaultsSLOT();
  virtual void factoryDefaultsSLOT();
  virtual void applySLOT();

  void setSampleTimeSLOT( int sampleTime );
  
};

#endif // RECORDERPREFS_HH

