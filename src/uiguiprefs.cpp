#include "uiguiprefs.h"

#include <qvariant.h>
#include <prefwidget.h>
#include "colorbutton.h"
/*
 *  Constructs a UIGuiPrefs which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIGuiPrefs::UIGuiPrefs(QWidget* parent, const char* name)
    : PrefWidget(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIGuiPrefs::~UIGuiPrefs()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIGuiPrefs::languageChange()
{
    retranslateUi(this);
}

