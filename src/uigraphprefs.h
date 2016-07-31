#ifndef UIGRAPHPREFS_H
#define UIGRAPHPREFS_H

#include <qvariant.h>
#include <prefwidget.h>


#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <prefwidget.h>
#include "colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_UIGraphPrefs
{
public:
    QVBoxLayout *vboxLayout;
    Q3GroupBox *GroupBox7;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    ColorButton *ui_dataColor;
    QLabel *label_2;
    QHBoxLayout *hboxLayout1;
    ColorButton *ui_bgColor;
    QLabel *TextLabel2_2_4;
    QHBoxLayout *hboxLayout2;
    ColorButton *ui_gridColor;
    QLabel *TextLabel3_2_2;
    QHBoxLayout *hboxLayout3;
    ColorButton *ui_cursorColor;
    QLabel *label2_4;
    QHBoxLayout *hboxLayout4;
    ColorButton *ui_startColor;
    QLabel *label2_2_2;
    QHBoxLayout *hboxLayout5;
    ColorButton *ui_extColor;
    QLabel *label2_3_2;
    Q3ButtonGroup *ButtonGroup11_2;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1_3_3_2;
    QComboBox *ui_lineMode;
    QLabel *TextLabel1_6_2;
    QSpacerItem *Spacer3_2_2_2;
    QSpinBox *ui_lineWidth;
    QLabel *TextLabel1;
    QComboBox *ui_pointMode;
    QSpacerItem *Spacer233;
    QCheckBox *ui_crosshair;
    QSpacerItem *Spacer41;

    void setupUi(PrefWidget *UIGraphPrefs)
    {
        if (UIGraphPrefs->objectName().isEmpty())
            UIGraphPrefs->setObjectName(QString::fromUtf8("UIGraphPrefs"));
        UIGraphPrefs->resize(339, 225);
        vboxLayout = new QVBoxLayout(UIGraphPrefs);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        GroupBox7 = new Q3GroupBox(UIGraphPrefs);
        GroupBox7->setObjectName(QString::fromUtf8("GroupBox7"));
        GroupBox7->setFrameShape(Q3GroupBox::Box);
        GroupBox7->setFrameShadow(Q3GroupBox::Sunken);
        GroupBox7->setColumnLayout(0, Qt::Vertical);
        GroupBox7->layout()->setSpacing(5);
        GroupBox7->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout = new QGridLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(GroupBox7->layout());
        if (boxlayout)
            boxlayout->addLayout(gridLayout);
        gridLayout->setAlignment(Qt::AlignTop);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_dataColor = new ColorButton(GroupBox7);
        ui_dataColor->setObjectName(QString::fromUtf8("ui_dataColor"));
        ui_dataColor->setMinimumSize(QSize(50, 0));
        ui_dataColor->setMaximumSize(QSize(50, 32767));

        hboxLayout->addWidget(ui_dataColor);

        label_2 = new QLabel(GroupBox7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setWordWrap(false);

        hboxLayout->addWidget(label_2);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_bgColor = new ColorButton(GroupBox7);
        ui_bgColor->setObjectName(QString::fromUtf8("ui_bgColor"));
        ui_bgColor->setMinimumSize(QSize(50, 0));
        ui_bgColor->setMaximumSize(QSize(50, 32767));

        hboxLayout1->addWidget(ui_bgColor);

        TextLabel2_2_4 = new QLabel(GroupBox7);
        TextLabel2_2_4->setObjectName(QString::fromUtf8("TextLabel2_2_4"));
        sizePolicy.setHeightForWidth(TextLabel2_2_4->sizePolicy().hasHeightForWidth());
        TextLabel2_2_4->setSizePolicy(sizePolicy);
        TextLabel2_2_4->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel2_2_4);


        gridLayout->addLayout(hboxLayout1, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ui_gridColor = new ColorButton(GroupBox7);
        ui_gridColor->setObjectName(QString::fromUtf8("ui_gridColor"));
        ui_gridColor->setMinimumSize(QSize(50, 0));
        ui_gridColor->setMaximumSize(QSize(50, 32767));

        hboxLayout2->addWidget(ui_gridColor);

        TextLabel3_2_2 = new QLabel(GroupBox7);
        TextLabel3_2_2->setObjectName(QString::fromUtf8("TextLabel3_2_2"));
        sizePolicy.setHeightForWidth(TextLabel3_2_2->sizePolicy().hasHeightForWidth());
        TextLabel3_2_2->setSizePolicy(sizePolicy);
        TextLabel3_2_2->setWordWrap(false);

        hboxLayout2->addWidget(TextLabel3_2_2);


        gridLayout->addLayout(hboxLayout2, 0, 1, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        ui_cursorColor = new ColorButton(GroupBox7);
        ui_cursorColor->setObjectName(QString::fromUtf8("ui_cursorColor"));
        ui_cursorColor->setMinimumSize(QSize(50, 0));
        ui_cursorColor->setMaximumSize(QSize(50, 32767));

        hboxLayout3->addWidget(ui_cursorColor);

        label2_4 = new QLabel(GroupBox7);
        label2_4->setObjectName(QString::fromUtf8("label2_4"));
        sizePolicy.setHeightForWidth(label2_4->sizePolicy().hasHeightForWidth());
        label2_4->setSizePolicy(sizePolicy);
        label2_4->setWordWrap(false);

        hboxLayout3->addWidget(label2_4);


        gridLayout->addLayout(hboxLayout3, 1, 1, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(5);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        ui_startColor = new ColorButton(GroupBox7);
        ui_startColor->setObjectName(QString::fromUtf8("ui_startColor"));
        ui_startColor->setMinimumSize(QSize(50, 0));
        ui_startColor->setMaximumSize(QSize(50, 32767));

        hboxLayout4->addWidget(ui_startColor);

        label2_2_2 = new QLabel(GroupBox7);
        label2_2_2->setObjectName(QString::fromUtf8("label2_2_2"));
        sizePolicy.setHeightForWidth(label2_2_2->sizePolicy().hasHeightForWidth());
        label2_2_2->setSizePolicy(sizePolicy);
        label2_2_2->setWordWrap(false);

        hboxLayout4->addWidget(label2_2_2);


        gridLayout->addLayout(hboxLayout4, 2, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(5);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        ui_extColor = new ColorButton(GroupBox7);
        ui_extColor->setObjectName(QString::fromUtf8("ui_extColor"));
        ui_extColor->setMinimumSize(QSize(50, 0));
        ui_extColor->setMaximumSize(QSize(50, 32767));

        hboxLayout5->addWidget(ui_extColor);

        label2_3_2 = new QLabel(GroupBox7);
        label2_3_2->setObjectName(QString::fromUtf8("label2_3_2"));
        sizePolicy.setHeightForWidth(label2_3_2->sizePolicy().hasHeightForWidth());
        label2_3_2->setSizePolicy(sizePolicy);
        label2_3_2->setWordWrap(false);

        hboxLayout5->addWidget(label2_3_2);


        gridLayout->addLayout(hboxLayout5, 2, 1, 1, 1);


        vboxLayout->addWidget(GroupBox7);

        ButtonGroup11_2 = new Q3ButtonGroup(UIGraphPrefs);
        ButtonGroup11_2->setObjectName(QString::fromUtf8("ButtonGroup11_2"));
        ButtonGroup11_2->setColumnLayout(0, Qt::Vertical);
        ButtonGroup11_2->layout()->setSpacing(5);
        ButtonGroup11_2->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout1 = new QGridLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(ButtonGroup11_2->layout());
        if (boxlayout1)
            boxlayout1->addLayout(gridLayout1);
        gridLayout1->setAlignment(Qt::AlignTop);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TextLabel1_3_3_2 = new QLabel(ButtonGroup11_2);
        TextLabel1_3_3_2->setObjectName(QString::fromUtf8("TextLabel1_3_3_2"));
        TextLabel1_3_3_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1_3_3_2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1_3_3_2, 1, 0, 1, 1);

        ui_lineMode = new QComboBox(ButtonGroup11_2);
        ui_lineMode->setObjectName(QString::fromUtf8("ui_lineMode"));

        gridLayout1->addWidget(ui_lineMode, 0, 1, 1, 1);

        TextLabel1_6_2 = new QLabel(ButtonGroup11_2);
        TextLabel1_6_2->setObjectName(QString::fromUtf8("TextLabel1_6_2"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TextLabel1_6_2->sizePolicy().hasHeightForWidth());
        TextLabel1_6_2->setSizePolicy(sizePolicy1);
        TextLabel1_6_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1_6_2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1_6_2, 0, 0, 1, 1);

        Spacer3_2_2_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer3_2_2_2, 0, 4, 1, 1);

        ui_lineWidth = new QSpinBox(ButtonGroup11_2);
        ui_lineWidth->setObjectName(QString::fromUtf8("ui_lineWidth"));
        ui_lineWidth->setMaximumSize(QSize(50, 32767));
        ui_lineWidth->setMaximum(5);
        ui_lineWidth->setMinimum(1);
        ui_lineWidth->setValue(2);

        gridLayout1->addWidget(ui_lineWidth, 0, 3, 1, 1);

        TextLabel1 = new QLabel(ButtonGroup11_2);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1, 0, 2, 1, 1);

        ui_pointMode = new QComboBox(ButtonGroup11_2);
        ui_pointMode->setObjectName(QString::fromUtf8("ui_pointMode"));

        gridLayout1->addWidget(ui_pointMode, 1, 1, 1, 1);

        Spacer233 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer233, 1, 2, 1, 3);


        vboxLayout->addWidget(ButtonGroup11_2);

        ui_crosshair = new QCheckBox(UIGraphPrefs);
        ui_crosshair->setObjectName(QString::fromUtf8("ui_crosshair"));
        ui_crosshair->setChecked(true);

        vboxLayout->addWidget(ui_crosshair);

        Spacer41 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer41);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(ui_dataColor);
        TextLabel2_2_4->setBuddy(ui_bgColor);
        TextLabel3_2_2->setBuddy(ui_gridColor);
        label2_4->setBuddy(ui_cursorColor);
        label2_2_2->setBuddy(ui_startColor);
        label2_3_2->setBuddy(ui_extColor);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(ui_lineMode, ui_lineWidth);
        QWidget::setTabOrder(ui_lineWidth, ui_pointMode);
        QWidget::setTabOrder(ui_pointMode, ui_crosshair);

        retranslateUi(UIGraphPrefs);

        ui_lineMode->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UIGraphPrefs);
    } // setupUi

    void retranslateUi(PrefWidget *UIGraphPrefs)
    {
        UIGraphPrefs->setCaption(QApplication::translate("UIGraphPrefs", "QFrameForm", 0, QApplication::UnicodeUTF8));
        GroupBox7->setTitle(QApplication::translate("UIGraphPrefs", "Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_dataColor->setWhatsThis(QApplication::translate("UIGraphPrefs", "Click this button so change the color of the data graph in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("UIGraphPrefs", "&Data", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_bgColor->setWhatsThis(QApplication::translate("UIGraphPrefs", "Click this button to change the background color of the recorder graph.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel2_2_4->setText(QApplication::translate("UIGraphPrefs", "&Background", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_gridColor->setWhatsThis(QApplication::translate("UIGraphPrefs", "Click this button to change the color of the grid and grid text in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel3_2_2->setText(QApplication::translate("UIGraphPrefs", "&Grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_cursorColor->setWhatsThis(QApplication::translate("UIGraphPrefs", "Click this button to change the color of the cursor at the current sampling position in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label2_4->setText(QApplication::translate("UIGraphPrefs", "Cu&rsor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_startColor->setWhatsThis(QApplication::translate("UIGraphPrefs", "Click this button to change the color of the cursor at the current sampling position in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label2_2_2->setText(QApplication::translate("UIGraphPrefs", "Start threshold", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_extColor->setWhatsThis(QApplication::translate("UIGraphPrefs", "Click this button to change the color of the cursor at the current sampling position in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label2_3_2->setText(QApplication::translate("UIGraphPrefs", "E&xternal threshold", 0, QApplication::UnicodeUTF8));
        ButtonGroup11_2->setTitle(QApplication::translate("UIGraphPrefs", "Drawing style", 0, QApplication::UnicodeUTF8));
        TextLabel1_3_3_2->setText(QApplication::translate("UIGraphPrefs", "Data points:", 0, QApplication::UnicodeUTF8));
        ui_lineMode->clear();
        ui_lineMode->insertItems(0, QStringList()
         << QApplication::translate("UIGraphPrefs", "No line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Solid line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Dotted line", 0, QApplication::UnicodeUTF8)
        );
        TextLabel1_6_2->setText(QApplication::translate("UIGraphPrefs", "Data:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_lineWidth->setWhatsThis(QApplication::translate("UIGraphPrefs", "Here you can choose the line width of the data graph in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel1->setText(QApplication::translate("UIGraphPrefs", "Width:", 0, QApplication::UnicodeUTF8));
        ui_pointMode->clear();
        ui_pointMode->insertItems(0, QStringList()
         << QApplication::translate("UIGraphPrefs", "No points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Diamond", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Large Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Large Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Large Diamond", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIGraphPrefs", "Large X", 0, QApplication::UnicodeUTF8)
        );
        ui_crosshair->setText(QApplication::translate("UIGraphPrefs", "Crosshair cursor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    /* XPM */
    static const char* const image0_data[] = { 
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
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UIGraphPrefs: public Ui_UIGraphPrefs {};
} // namespace Ui

QT_END_NAMESPACE

class UIGraphPrefs : public PrefWidget, public Ui::UIGraphPrefs
{
    Q_OBJECT

public:
    UIGraphPrefs(QWidget* parent = 0, const char* name = 0);
    ~UIGraphPrefs();

protected slots:
    virtual void languageChange();

};

#endif // UIGRAPHPREFS_H
