#ifndef UIMAINWID_H
#define UIMAINWID_H

#include <qvariant.h>


#include <Qt3Support/Q3Frame>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include "dmmgraph.h"

QT_BEGIN_NAMESPACE

class Ui_UIMainWid
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    DMMGraph *ui_graph;

    void setupUi(Q3Frame *UIMainWid)
    {
        if (UIMainWid->objectName().isEmpty())
            UIMainWid->setObjectName(QString::fromUtf8("UIMainWid"));
        UIMainWid->resize(605, 496);
        UIMainWid->setWindowIcon(qt_get_icon(image0_ID));
        UIMainWid->setFrameShape(QFrame::StyledPanel);
        UIMainWid->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(UIMainWid);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_graph = new DMMGraph(UIMainWid);
        ui_graph->setObjectName(QString::fromUtf8("ui_graph"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_graph->sizePolicy().hasHeightForWidth());
        ui_graph->setSizePolicy(sizePolicy);
        ui_graph->setMinimumSize(QSize(0, 60));
        ui_graph->setCursor(QCursor(static_cast<Qt::CursorShape>(0)));

        hboxLayout->addWidget(ui_graph);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(UIMainWid);

        QMetaObject::connectSlotsByName(UIMainWid);
    } // setupUi

    void retranslateUi(Q3Frame *UIMainWid)
    {
        UIMainWid->setWindowTitle(QApplication::translate("UIMainWid", "QtDMM 0.4.1", 0, QApplication::UnicodeUTF8));
        UIMainWid->setWindowIconText(QApplication::translate("UIMainWid", "QtDMM 0.4", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_graph->setWhatsThis(QApplication::translate("UIMainWid", "This is the plotting area for the transient recorder. It is widely configurable by clicking the <b>config ...</b> button to the right. Data aquisition may be started by hand, at a specific time or automatically triggered by the measured value itself <i>(See configuration dialog)</i><p>\n"
"The maximum resolution for data aquisition is 1/10th of a second, but may also be configured to sample once a week or what ever you want.\n"
"<p>\n"
"<b>Note:</b> Connecting to the DMM as well as a change of the measuring unit automatically clears the graph.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        image1_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    /* XPM */
    static const char* const image0_data[] = { 
"32 32 14 1",
". c None",
"# c #000000",
"i c #0018ff",
"k c #0020ff",
"l c #101010",
"c c #393839",
"b c #5a595a",
"a c #7b797b",
"e c #949594",
"j c #c5c6c5",
"d c #c5dec5",
"f c #ff0000",
"h c #ffee00",
"g c #ffffff",
"................................",
"......#####################.....",
".....#aaaaaaaaaaaaaaaaaaaaa#....",
"....#abbbbbbbbbbbbbbbbbbbbbc#...",
"....#ab###################bc#...",
"....#ab#ddddddddddddddddd#bc#...",
"....#ab#d###ddd#d#d###d#d#bc#...",
"....#ab#ddd#ddd#d#ddd#d#d#bc#...",
"....#ab#d###ddd###d###d#d#bc#...",
"....#ab#ddd#ddddd#d#ddd#d#bc#...",
"....#ab#d###d#ddd#d###d#d#bc#...",
"....#ab#ddddddddddddddddd#bc#...",
"....#ab#d#e#e#e#ddddddddd#bc#...",
"....#ab#d#e#e#e#ddddddddd#bc#...",
"....#ab#ddddddddddddddddd#bc#...",
"....#ab###################bc#...",
"....#abbbbbbbbbbbbbbbbbbbbbc#...",
"....#abffbbbbbbbbbbbbbbbbbbb#...",
"....#afgffbbbbbbb##########c#...",
"....#afggfbbbb###eeeeeeeeeec#...",
"....#abffbb###eeeeeeheeeiiec#...",
"....#bbbb##eeeeeeeehhheiiiic#...",
"....#a###eeeeejjeejeeeeiiiic#...",
"....#aeeeeejeeeeeeeeeejeiiec#...",
"....#aheeeeeehhhjjjjeejeeeec#...",
"....#ahejeejjhhhjjjjjjeeeeec#...",
"....#ahjeejjj#######jjkeejec#...",
"....#aheejjj#########kkkejec#...",
"....#aheejj#g#ccccc###kkeeec#...",
"....#aheff##cglccccc###kkeec#...",
"....#aheff##clllccccc##kkeec#...",
"....ccccccccccccccccccccccccc..."};


    /* XPM */
    static const char* const image1_data[] = { 
"22 22 2 1",
". c None",
"# c #a4c610",
"........######........",
".....###########......",
"....##############....",
"...################...",
"..######......######..",
"..#####........#####..",
".#####.......#..#####.",
".####.......###..####.",
"####.......#####..####",
"####......#####...####",
"####....#######...####",
"####....######....####",
"####...########...####",
".####.##########..####",
".####..####.#########.",
".#####..##...########.",
"..#####.......#######.",
"..######......######..",
"...###################",
"....##################",
"......###########.###.",
"........######.....#.."};


    switch (id) {
        case image0_ID: return QPixmap((const char**)image0_data);
        case image1_ID: return QPixmap((const char**)image1_data);
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UIMainWid: public Ui_UIMainWid {};
} // namespace Ui

QT_END_NAMESPACE

class UIMainWid : public Q3Frame, public Ui::UIMainWid
{
    Q_OBJECT

public:
    UIMainWid(QWidget* parent = 0, const char* name = 0);
    ~UIMainWid();

protected slots:
    virtual void languageChange();

};

#endif // UIMAINWID_H
