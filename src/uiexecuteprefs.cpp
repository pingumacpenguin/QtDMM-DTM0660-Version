#include "uiexecuteprefs.h"

#include <qvariant.h>
#include <prefwidget.h>
/*
 *  Constructs a UIExecutePrefs which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIExecutePrefs::UIExecutePrefs(QWidget* parent, const char* name)
    : PrefWidget(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIExecutePrefs::~UIExecutePrefs()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIExecutePrefs::languageChange()
{
    retranslateUi(this);
}

