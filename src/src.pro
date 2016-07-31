TEMPLATE        = app
CONFIG          += qt release warn_on thread
macx:CONFIG     += static
linux*:CONFIG   += qesp_linux_udev
win32:CONFIG    += static windows console
QT              += qt3support
INCLUDEPATH     = . moc xpm ../3rdparty/qextserialport
MOC_DIR         = moc
OBJECTS_DIR     = tmp
DEPENDPATH      = . ../3rdparty/qextserialport
//QTLFLAGS        += -DQT3_SUPPORT

HEADERS   = \
            colorbutton.h \
            configdlg.h \
            configitem.h \
            displaywid.h \
            dmm.h \
            dmmbar.h \
            dmmgraph.h \
            dmmprefs.h \
            engnumbervalidator.h \
            executeprefs.h \
            graphprefs.h \
            guiprefs.h \
            integrationprefs.h \
            mainwid.h \
            mainwin.h \
            prefwidget.h \
            printdlg.h \
            qcleanuphandler.h \
            readerthread.h \
            readevent.h \
            recorderprefs.h \
            scaleprefs.h \
            simplecfg.h \
            tipdlg.h \
            aboutdlg.h

#The following line was changed from FORMS to FORMS3 by qt3to4
FORMS3 = \
             uiconfigdlg.ui \
             uidmmprefs.ui \
             uiexecuteprefs.ui \
             uigraphprefs.ui \
             uiguiprefs.ui \
             uiintegrationprefs.ui \
             uimainwid.ui \
             uiprintdlg.ui \
             uirecorderprefs.ui \
             uiscaleprefs.ui \
             uitipdlg.ui
             
FORMS = aboutdlg.ui
                        
SOURCES   = \
            colorbutton.cpp \
            configdlg.cpp \
            configitem.cpp \
            displaywid.cpp \
            dmm.cpp \
            dmmbar.cpp \
            dmmgraph.cpp \
            dmmprefs.cpp \
            engnumbervalidator.cpp \
            executeprefs.cpp \
            graphprefs.cpp \
            guiprefs.cpp \
            integrationprefs.cpp \
            main.cpp \
            mainwid.cpp \
            mainwin.cpp \
            prefwidget.cpp \
            printdlg.cpp \
            readerthread.cpp \
            readevent.cpp \
            recorderprefs.cpp \
            scaleprefs.cpp \
            simplecfg.cpp \
            tipdlg.cpp \
            aboutdlg.cpp
 
# Added for QextSerialPort
HEADERS         += ../3rdparty/qextserialport//qextserialport.h \
                   ../3rdparty/qextserialport//qextserialenumerator.h \
                   ../3rdparty/qextserialport//qextserialport_global.h \
                   ../3rdparty/qextserialport//qextserialport_p.h \
                   ../3rdparty/qextserialport//qextserialenumerator_p.h

SOURCES         += ../3rdparty/qextserialport//qextserialport.cpp \
                   ../3rdparty/qextserialport//qextserialenumerator.cpp
unix {
    SOURCES            += ../3rdparty/qextserialport//qextserialport_unix.cpp
    linux* {
        SOURCES        += ../3rdparty/qextserialport//qextserialenumerator_linux.cpp
    } else:macx {
        SOURCES        += ../3rdparty/qextserialport//qextserialenumerator_osx.cpp
    } else {
        SOURCES        += ../3rdparty/qextserialport//qextserialenumerator_unix.cpp
    }
}
win32:SOURCES          += ../3rdparty/qextserialport//qextserialport_win.cpp \
                          ../3rdparty/qextserialport//qextserialenumerator_win.cpp

linux*{
	LIBS += -ludev
  #  !qesp_linux_udev:DEFINES += QESP_NO_UDEV
  #  qesp_linux_udev: LIBS += -ludev
}

macx:LIBS              += -framework IOKit -framework CoreFoundation
win32:LIBS             += -lsetupapi -ladvapi32 -luser32

# moc doesn't detect Q_OS_LINUX correctly, so add this to make it work
linux*:DEFINES += __linux__

win32 {
	SOURCES += ../3rdparty/qextserialport/qextserialenumerator_win.cpp \
						 ../3rdparty/qextserialport/qextserialport_win.cpp
	RC_FILE  = qtdmm.rc
}

macx {
	SOURCES  += ../3rdparty/qextserialport/qextserialenumerator_osx.cpp
  LIBS      = -framework Carbon -framework QuickTime -lz $(QTDIR)/lib/libqt-mt.a
  RC_FILE   = QtDMMIcon.icns
}

TARGET    = qtdmm
VERSION   = 0.9.2
DESTDIR   = ../bin

#The following line was inserted by qt3to4
QT +=  
#The following line was inserted by qt3to4
CONFIG += uic3

