//======================================================================
// File:		aboutdlg.h
// Author:	Matthias Toussaint
// Created:	Tue 19. Apr 19:56:16 CEST 2016
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
// Copyright (c) 2016 Matthias Toussaint
//======================================================================

#ifndef ABOUTDLG_HH
#define ABOUTDLG_HH

#include <QDialog>

#include <ui_aboutdlg.h>

class AboutDlg : public QDialog
{
	Q_OBJECT
public:
	AboutDlg( QWidget *parent=0 );
	virtual ~AboutDlg();
	
	void setMessage( const QString & );
	
protected:
	Ui::AboutDlg ui;
};

#endif // ABOUTDLG_HH
