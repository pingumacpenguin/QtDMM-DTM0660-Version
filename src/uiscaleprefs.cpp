#include "uiscaleprefs.h"

#include <qvariant.h>
#include <prefwidget.h>
/*
 *  Constructs a UIScalePrefs which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIScalePrefs::UIScalePrefs(QWidget* parent, const char* name)
    : PrefWidget(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIScalePrefs::~UIScalePrefs()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIScalePrefs::languageChange()
{
    retranslateUi(this);
}

