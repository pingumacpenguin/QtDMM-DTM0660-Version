#include "uirecorderprefs.h"

#include <qvariant.h>
#include <prefwidget.h>
/*
 *  Constructs a UIRecorderPrefs which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIRecorderPrefs::UIRecorderPrefs(QWidget* parent, const char* name)
    : PrefWidget(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIRecorderPrefs::~UIRecorderPrefs()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIRecorderPrefs::languageChange()
{
    retranslateUi(this);
}

