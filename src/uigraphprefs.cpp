#include "uigraphprefs.h"

#include <qvariant.h>
#include <prefwidget.h>
#include "colorbutton.h"
/*
 *  Constructs a UIGraphPrefs which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIGraphPrefs::UIGraphPrefs(QWidget* parent, const char* name)
    : PrefWidget(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIGraphPrefs::~UIGraphPrefs()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIGraphPrefs::languageChange()
{
    retranslateUi(this);
}

