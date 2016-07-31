#include "uiintegrationprefs.h"

#include <qvariant.h>
#include <prefwidget.h>
#include "colorbutton.h"
/*
 *  Constructs a UIIntegrationPrefs which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIIntegrationPrefs::UIIntegrationPrefs(QWidget* parent, const char* name)
    : PrefWidget(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIIntegrationPrefs::~UIIntegrationPrefs()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIIntegrationPrefs::languageChange()
{
    retranslateUi(this);
}

