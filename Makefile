#############################################################################
# Makefile for building: QtDMM
# Generated by qmake (2.01a) (Qt 4.8.7) on: Thu Aug 11 10:30:21 2016
# Project:  QtDMM.pro
# Template: subdirs
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile QtDMM.pro
#############################################################################

first: make_default
MAKEFILE      = Makefile
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		sub-src

src//$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) src/ || $(MKDIR) src/ 
	cd src/ && $(QMAKE) /home/ahull/PersonalApps/Multimeter/QT-DMM/QtDMM-DTM0660-Version/src/src.pro -o $(MAKEFILE)
sub-src-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) src/ || $(MKDIR) src/ 
	cd src/ && $(QMAKE) /home/ahull/PersonalApps/Multimeter/QT-DMM/QtDMM-DTM0660-Version/src/src.pro -o $(MAKEFILE)
sub-src: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE)
sub-src-make_default-ordered: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) 
sub-src-make_default: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) 
sub-src-make_first-ordered: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) first
sub-src-make_first: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) first
sub-src-all-ordered: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) all
sub-src-all: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) all
sub-src-clean-ordered: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) clean
sub-src-clean: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) clean
sub-src-distclean-ordered: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) distclean
sub-src-distclean: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) distclean
sub-src-install_subtargets-ordered: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) install
sub-src-install_subtargets: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) install
sub-src-uninstall_subtargets-ordered: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) uninstall
sub-src-uninstall_subtargets: src//$(MAKEFILE) FORCE
	cd src/ && $(MAKE) -f $(MAKEFILE) uninstall

Makefile: QtDMM.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf
	$(QMAKE) -o Makefile QtDMM.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
qmake: qmake_all FORCE
	@$(QMAKE) -o Makefile QtDMM.pro

qmake_all: sub-src-qmake_all FORCE

make_default: sub-src-make_default-ordered FORCE
make_first: sub-src-make_first-ordered FORCE
all: sub-src-all-ordered FORCE
clean: sub-src-clean-ordered FORCE
distclean: sub-src-distclean-ordered FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-src-install_subtargets-ordered FORCE
uninstall_subtargets: sub-src-uninstall_subtargets-ordered FORCE

sub-src-check_ordered: src/$(MAKEFILE)
	cd src/ && $(MAKE) -f $(MAKEFILE) check
check: sub-src-check_ordered

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

