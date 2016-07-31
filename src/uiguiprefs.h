#ifndef UIGUIPREFS_H
#define UIGUIPREFS_H

#include <qvariant.h>
#include <prefwidget.h>


#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <prefwidget.h>
#include "colorbutton.h"
#include "prefwidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIGuiPrefs
{
public:
    QVBoxLayout *vboxLayout;
    Q3GroupBox *GroupBox4;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *ui_showBar;
    QSpacerItem *Spacer34;
    QHBoxLayout *hboxLayout1;
    QCheckBox *ui_showMinMax;
    QSpacerItem *Spacer34_2;
    QCheckBox *ui_showDisplay;
    QHBoxLayout *hboxLayout2;
    ColorButton *ui_bgColorDisplay;
    QLabel *TextLabel2_2_2;
    QHBoxLayout *hboxLayout3;
    ColorButton *ui_textColor;
    QLabel *TextLabel2_2_3;
    Q3GroupBox *GroupBox4_2;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout4;
    QCheckBox *ui_alertUnsavedData;
    QSpacerItem *Spacer1_10;
    QHBoxLayout *hboxLayout5;
    QCheckBox *ui_saveWindowPos;
    QSpacerItem *Spacer2_3;
    QHBoxLayout *hboxLayout6;
    QCheckBox *ui_saveWindowSize;
    QSpacerItem *Spacer2_3_2;
    Q3ButtonGroup *ButtonGroup12_2;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout7;
    QCheckBox *ui_textLabel;
    QSpacerItem *Spacer3_4_2;
    QHBoxLayout *hboxLayout8;
    QCheckBox *ui_dmmToolBar;
    QSpacerItem *Spacer3_4_2_2;
    QHBoxLayout *hboxLayout9;
    QCheckBox *ui_fileToolBar;
    QSpacerItem *Spacer3_4_2_3;
    QHBoxLayout *hboxLayout10;
    QCheckBox *ui_helpToolBar;
    QSpacerItem *Spacer3_4_2_4;
    QHBoxLayout *hboxLayout11;
    QCheckBox *ui_graphToolBar;
    QSpacerItem *Spacer3_4_2_4_2;
    QCheckBox *ui_tipOfTheDay;
    QSpacerItem *Spacer1_5;

    void setupUi(PrefWidget *UIGuiPrefs)
    {
        if (UIGuiPrefs->objectName().isEmpty())
            UIGuiPrefs->setObjectName(QString::fromUtf8("UIGuiPrefs"));
        UIGuiPrefs->resize(559, 360);
        vboxLayout = new QVBoxLayout(UIGuiPrefs);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        GroupBox4 = new Q3GroupBox(UIGuiPrefs);
        GroupBox4->setObjectName(QString::fromUtf8("GroupBox4"));
        GroupBox4->setColumnLayout(0, Qt::Vertical);
        GroupBox4->layout()->setSpacing(5);
        GroupBox4->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout = new QGridLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(GroupBox4->layout());
        if (boxlayout)
            boxlayout->addLayout(gridLayout);
        gridLayout->setAlignment(Qt::AlignTop);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_showBar = new QCheckBox(GroupBox4);
        ui_showBar->setObjectName(QString::fromUtf8("ui_showBar"));
        ui_showBar->setChecked(true);

        hboxLayout->addWidget(ui_showBar);

        Spacer34 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Spacer34);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_showMinMax = new QCheckBox(GroupBox4);
        ui_showMinMax->setObjectName(QString::fromUtf8("ui_showMinMax"));
        ui_showMinMax->setChecked(true);

        hboxLayout1->addWidget(ui_showMinMax);

        Spacer34_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Spacer34_2);


        gridLayout->addLayout(hboxLayout1, 1, 2, 1, 2);

        ui_showDisplay = new QCheckBox(GroupBox4);
        ui_showDisplay->setObjectName(QString::fromUtf8("ui_showDisplay"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_showDisplay->sizePolicy().hasHeightForWidth());
        ui_showDisplay->setSizePolicy(sizePolicy);
        ui_showDisplay->setChecked(true);

        gridLayout->addWidget(ui_showDisplay, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ui_bgColorDisplay = new ColorButton(GroupBox4);
        ui_bgColorDisplay->setObjectName(QString::fromUtf8("ui_bgColorDisplay"));
        ui_bgColorDisplay->setMinimumSize(QSize(50, 0));
        ui_bgColorDisplay->setMaximumSize(QSize(50, 32767));

        hboxLayout2->addWidget(ui_bgColorDisplay);

        TextLabel2_2_2 = new QLabel(GroupBox4);
        TextLabel2_2_2->setObjectName(QString::fromUtf8("TextLabel2_2_2"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TextLabel2_2_2->sizePolicy().hasHeightForWidth());
        TextLabel2_2_2->setSizePolicy(sizePolicy1);
        TextLabel2_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);
        TextLabel2_2_2->setWordWrap(false);

        hboxLayout2->addWidget(TextLabel2_2_2);


        gridLayout->addLayout(hboxLayout2, 0, 1, 1, 2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        ui_textColor = new ColorButton(GroupBox4);
        ui_textColor->setObjectName(QString::fromUtf8("ui_textColor"));
        ui_textColor->setMinimumSize(QSize(50, 0));
        ui_textColor->setMaximumSize(QSize(50, 32767));

        hboxLayout3->addWidget(ui_textColor);

        TextLabel2_2_3 = new QLabel(GroupBox4);
        TextLabel2_2_3->setObjectName(QString::fromUtf8("TextLabel2_2_3"));
        sizePolicy1.setHeightForWidth(TextLabel2_2_3->sizePolicy().hasHeightForWidth());
        TextLabel2_2_3->setSizePolicy(sizePolicy1);
        TextLabel2_2_3->setWordWrap(false);

        hboxLayout3->addWidget(TextLabel2_2_3);


        gridLayout->addLayout(hboxLayout3, 0, 3, 1, 1);


        vboxLayout->addWidget(GroupBox4);

        GroupBox4_2 = new Q3GroupBox(UIGuiPrefs);
        GroupBox4_2->setObjectName(QString::fromUtf8("GroupBox4_2"));
        GroupBox4_2->setColumnLayout(0, Qt::Vertical);
        GroupBox4_2->layout()->setSpacing(5);
        GroupBox4_2->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout1 = new QGridLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(GroupBox4_2->layout());
        if (boxlayout1)
            boxlayout1->addLayout(gridLayout1);
        gridLayout1->setAlignment(Qt::AlignTop);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(0);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        ui_alertUnsavedData = new QCheckBox(GroupBox4_2);
        ui_alertUnsavedData->setObjectName(QString::fromUtf8("ui_alertUnsavedData"));
        ui_alertUnsavedData->setChecked(true);

        hboxLayout4->addWidget(ui_alertUnsavedData);

        Spacer1_10 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(Spacer1_10);


        gridLayout1->addLayout(hboxLayout4, 0, 0, 1, 2);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(0);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        ui_saveWindowPos = new QCheckBox(GroupBox4_2);
        ui_saveWindowPos->setObjectName(QString::fromUtf8("ui_saveWindowPos"));
        ui_saveWindowPos->setChecked(true);

        hboxLayout5->addWidget(ui_saveWindowPos);

        Spacer2_3 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(Spacer2_3);


        gridLayout1->addLayout(hboxLayout5, 1, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(0);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        ui_saveWindowSize = new QCheckBox(GroupBox4_2);
        ui_saveWindowSize->setObjectName(QString::fromUtf8("ui_saveWindowSize"));
        ui_saveWindowSize->setChecked(true);

        hboxLayout6->addWidget(ui_saveWindowSize);

        Spacer2_3_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(Spacer2_3_2);


        gridLayout1->addLayout(hboxLayout6, 1, 1, 1, 1);


        vboxLayout->addWidget(GroupBox4_2);

        ButtonGroup12_2 = new Q3ButtonGroup(UIGuiPrefs);
        ButtonGroup12_2->setObjectName(QString::fromUtf8("ButtonGroup12_2"));
        ButtonGroup12_2->setColumnLayout(0, Qt::Vertical);
        ButtonGroup12_2->layout()->setSpacing(5);
        ButtonGroup12_2->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout2 = new QGridLayout();
        QBoxLayout *boxlayout2 = qobject_cast<QBoxLayout *>(ButtonGroup12_2->layout());
        if (boxlayout2)
            boxlayout2->addLayout(gridLayout2);
        gridLayout2->setAlignment(Qt::AlignTop);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(0);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        ui_textLabel = new QCheckBox(ButtonGroup12_2);
        ui_textLabel->setObjectName(QString::fromUtf8("ui_textLabel"));
        ui_textLabel->setChecked(true);

        hboxLayout7->addWidget(ui_textLabel);

        Spacer3_4_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(Spacer3_4_2);


        gridLayout2->addLayout(hboxLayout7, 0, 0, 1, 2);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(0);
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        ui_dmmToolBar = new QCheckBox(ButtonGroup12_2);
        ui_dmmToolBar->setObjectName(QString::fromUtf8("ui_dmmToolBar"));
        ui_dmmToolBar->setChecked(true);

        hboxLayout8->addWidget(ui_dmmToolBar);

        Spacer3_4_2_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(Spacer3_4_2_2);


        gridLayout2->addLayout(hboxLayout8, 1, 0, 1, 1);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(0);
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        ui_fileToolBar = new QCheckBox(ButtonGroup12_2);
        ui_fileToolBar->setObjectName(QString::fromUtf8("ui_fileToolBar"));
        ui_fileToolBar->setChecked(true);

        hboxLayout9->addWidget(ui_fileToolBar);

        Spacer3_4_2_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(Spacer3_4_2_3);


        gridLayout2->addLayout(hboxLayout9, 2, 0, 1, 1);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(0);
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        ui_helpToolBar = new QCheckBox(ButtonGroup12_2);
        ui_helpToolBar->setObjectName(QString::fromUtf8("ui_helpToolBar"));
        ui_helpToolBar->setChecked(true);

        hboxLayout10->addWidget(ui_helpToolBar);

        Spacer3_4_2_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout10->addItem(Spacer3_4_2_4);


        gridLayout2->addLayout(hboxLayout10, 2, 1, 1, 1);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(0);
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        ui_graphToolBar = new QCheckBox(ButtonGroup12_2);
        ui_graphToolBar->setObjectName(QString::fromUtf8("ui_graphToolBar"));
        ui_graphToolBar->setChecked(true);

        hboxLayout11->addWidget(ui_graphToolBar);

        Spacer3_4_2_4_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(Spacer3_4_2_4_2);


        gridLayout2->addLayout(hboxLayout11, 1, 1, 1, 1);


        vboxLayout->addWidget(ButtonGroup12_2);

        ui_tipOfTheDay = new QCheckBox(UIGuiPrefs);
        ui_tipOfTheDay->setObjectName(QString::fromUtf8("ui_tipOfTheDay"));
        ui_tipOfTheDay->setChecked(true);

        vboxLayout->addWidget(ui_tipOfTheDay);

        Spacer1_5 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer1_5);

#ifndef QT_NO_SHORTCUT
        TextLabel2_2_2->setBuddy(ui_bgColorDisplay);
        TextLabel2_2_3->setBuddy(ui_textColor);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(ui_showBar, ui_showMinMax);
        QWidget::setTabOrder(ui_showMinMax, ui_alertUnsavedData);
        QWidget::setTabOrder(ui_alertUnsavedData, ui_saveWindowPos);
        QWidget::setTabOrder(ui_saveWindowPos, ui_saveWindowSize);
        QWidget::setTabOrder(ui_saveWindowSize, ui_textLabel);
        QWidget::setTabOrder(ui_textLabel, ui_dmmToolBar);
        QWidget::setTabOrder(ui_dmmToolBar, ui_graphToolBar);
        QWidget::setTabOrder(ui_graphToolBar, ui_fileToolBar);
        QWidget::setTabOrder(ui_fileToolBar, ui_helpToolBar);
        QWidget::setTabOrder(ui_helpToolBar, ui_tipOfTheDay);

        retranslateUi(UIGuiPrefs);

        QMetaObject::connectSlotsByName(UIGuiPrefs);
    } // setupUi

    void retranslateUi(PrefWidget *UIGuiPrefs)
    {
        UIGuiPrefs->setCaption(QApplication::translate("UIGuiPrefs", "QFrameForm", 0, QApplication::UnicodeUTF8));
        GroupBox4->setTitle(QApplication::translate("UIGuiPrefs", "Display", 0, QApplication::UnicodeUTF8));
        ui_showBar->setText(QApplication::translate("UIGuiPrefs", "Show bargraph", 0, QApplication::UnicodeUTF8));
        ui_showMinMax->setText(QApplication::translate("UIGuiPrefs", "Show Min/Max", 0, QApplication::UnicodeUTF8));
        ui_showDisplay->setText(QApplication::translate("UIGuiPrefs", "Show", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_bgColorDisplay->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "Click this button to change the color of the numerical display for the dmm.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel2_2_2->setText(QApplication::translate("UIGuiPrefs", "Back&ground", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_textColor->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "Click this button to change the color of the text in the numerical display.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel2_2_3->setText(QApplication::translate("UIGuiPrefs", "&Text", 0, QApplication::UnicodeUTF8));
        GroupBox4_2->setTitle(QApplication::translate("UIGuiPrefs", "At program exit", 0, QApplication::UnicodeUTF8));
        ui_alertUnsavedData->setText(QApplication::translate("UIGuiPrefs", "Alert unsaved data", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_alertUnsavedData->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "When this option is checked QtDMM will alert you if you are going to overwrite or loose unsaved data (import, quit).", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_saveWindowPos->setText(QApplication::translate("UIGuiPrefs", "Save window position", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_saveWindowPos->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "When this option is checked the window position and size saved and restored in the next session.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_saveWindowSize->setText(QApplication::translate("UIGuiPrefs", "Save window size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_saveWindowSize->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "When this option is checked the window position and size saved and restored in the next session.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ButtonGroup12_2->setTitle(QApplication::translate("UIGuiPrefs", "Toolbar", 0, QApplication::UnicodeUTF8));
        ui_textLabel->setText(QApplication::translate("UIGuiPrefs", "Icons with text label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_textLabel->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "Check this if you want text labels in the toolbar.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_dmmToolBar->setText(QApplication::translate("UIGuiPrefs", "DMM toolbar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_dmmToolBar->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "Check this if you want text labels in the toolbar.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_fileToolBar->setText(QApplication::translate("UIGuiPrefs", "File toolbar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_fileToolBar->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "Check this if you want text labels in the toolbar.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_helpToolBar->setText(QApplication::translate("UIGuiPrefs", "Help toolbar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_helpToolBar->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "Check this if you want text labels in the toolbar.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_graphToolBar->setText(QApplication::translate("UIGuiPrefs", "Graph toolbar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_graphToolBar->setProperty("whatsThis", QVariant(QApplication::translate("UIGuiPrefs", "Check this if you want text labels in the toolbar.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_tipOfTheDay->setText(QApplication::translate("UIGuiPrefs", "Show tip of the day", 0, QApplication::UnicodeUTF8));
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xc7, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xad, 0x55, 0xdb, 0x11, 0x84,
    0x20, 0x0c, 0x4c, 0x18, 0x0b, 0xb8, 0x1a, 0x28, 0xc7, 0x3a, 0xad, 0x81,
    0x12, 0x28, 0xc3, 0x56, 0xf4, 0x2b, 0x37, 0x92, 0xdb, 0x3c, 0xc0, 0xdb,
    0x2f, 0xc7, 0x24, 0xbb, 0x79, 0x01, 0xdc, 0x7b, 0x27, 0x0f, 0x27, 0xed,
    0x17, 0xfa, 0x5f, 0xa9, 0xb1, 0x17, 0xb7, 0xcd, 0x90, 0x21, 0x1f, 0x4b,
    0xa0, 0xac, 0x90, 0x6a, 0x7f, 0x14, 0x53, 0xb4, 0xd3, 0x0c, 0xa9, 0x17,
    0xbb, 0x59, 0x06, 0x81, 0x55, 0x2a, 0xf2, 0x3f, 0x69, 0xbf, 0xc4, 0xff,
    0xa7, 0x15, 0x19, 0xd2, 0xc8, 0xf6, 0x25, 0x46, 0xea, 0x5e, 0xa0, 0x37,
    0x38, 0xb1, 0xc1, 0x8c, 0x33, 0xa4, 0xd1, 0x56, 0xf0, 0xd1, 0x3f, 0x43,
    0xb6, 0x19, 0x52, 0xe4, 0xaf, 0x6d, 0x6e, 0x8f, 0xb3, 0xa4, 0x08, 0xf0,
    0x80, 0x44, 0x84, 0x19, 0xa4, 0x33, 0xd6, 0x48, 0x6d, 0x85, 0x05, 0x2f,
    0xdb, 0xa8, 0x92, 0xa2, 0x95, 0xf5, 0xd4, 0x57, 0x85, 0xcd, 0x8c, 0x51,
    0xa9, 0xd6, 0xde, 0x6a, 0x81, 0x4a, 0x8d, 0x21, 0x31, 0xda, 0x51, 0xf9,
    0x8e, 0x7a, 0x3b, 0x64, 0xec, 0x9d, 0xa0, 0x4a, 0x8d, 0xb5, 0x3d, 0x43,
    0xbe, 0x3c, 0x3c, 0x0b, 0x22, 0xca, 0xcf, 0x17, 0xe4, 0xcd, 0xb5, 0xa9,
    0x31, 0x64, 0x9c, 0xed, 0xdf, 0x34, 0xb1, 0x90, 0xcf, 0x0a, 0xa0, 0x19,
    0xf0, 0x3f, 0x1f, 0xd3, 0xe7, 0x45, 0x7f, 0x03, 0xb5, 0xa6, 0x6c, 0x9e,
    0xd2, 0x6e, 0x86, 0x13, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UIGuiPrefs: public Ui_UIGuiPrefs {};
} // namespace Ui

QT_END_NAMESPACE

class UIGuiPrefs : public PrefWidget, public Ui::UIGuiPrefs
{
    Q_OBJECT

public:
    UIGuiPrefs(QWidget* parent = 0, const char* name = 0);
    ~UIGuiPrefs();

protected slots:
    virtual void languageChange();

};

#endif // UIGUIPREFS_H
