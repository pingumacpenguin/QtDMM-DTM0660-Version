//======================================================================
// File:		graphprefs.h
// Author:	Matthias Toussaint
// Created:	Sat Oct 19 15:28:30 CEST 2002
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

#ifndef GRAPHPREFS_HH
#define GRAPHPREFS_HH

#include <uigraphprefs.h>

class GraphPrefs : public UIGraphPrefs
{
  Q_OBJECT
public:
  GraphPrefs( QWidget *parent=0, const char *name=0 );
  virtual ~GraphPrefs();
  
  QColor bgColor() const;
  QColor gridColor() const;
  QColor dataColor() const;
  QColor startColor() const;
  QColor externalColor() const;
  QColor cursorColor() const;
  int    lineWidth() const;
  int    lineMode() const;
  int    pointMode() const;
  bool   crosshair() const;

public slots:
  virtual void defaultsSLOT();
  virtual void factoryDefaultsSLOT();
  virtual void applySLOT();
  
};

#endif // GRAPHPREFS_HH

