#include "uidmmprefs.h"

#include <qvariant.h>
#include <prefwidget.h>
/*
 *  Constructs a UIDmmPrefs which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIDmmPrefs::UIDmmPrefs(QWidget* parent, const char* name)
    : PrefWidget(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIDmmPrefs::~UIDmmPrefs()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIDmmPrefs::languageChange()
{
    retranslateUi(this);
}

