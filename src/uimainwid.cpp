#include "uimainwid.h"

#include <qvariant.h>
#include "dmmgraph.h"
/*
 *  Constructs a UIMainWid which is a child of 'parent', with the
 *  name 'name'.' 
 */
UIMainWid::UIMainWid(QWidget* parent, const char* name)
    : Q3Frame(parent, name)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIMainWid::~UIMainWid()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIMainWid::languageChange()
{
    retranslateUi(this);
}

