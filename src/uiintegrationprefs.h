#ifndef UIINTEGRATIONPREFS_H
#define UIINTEGRATIONPREFS_H

#include <qvariant.h>
#include <prefwidget.h>


#include <Qt3Support/Q3ButtonGroup>
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
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <prefwidget.h>
#include "colorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_UIIntegrationPrefs
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *ui_showInt;
    QSpacerItem *Spacer40_2_2;
    Q3ButtonGroup *ButtonGroup15;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout1;
    ColorButton *ui_intColor;
    QLabel *label_2_2_2_3;
    QHBoxLayout *hboxLayout2;
    ColorButton *ui_intThresholdColor;
    QLabel *label_2_2_2_2_2;
    Q3ButtonGroup *ButtonGroup16;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1_3_2_2;
    QLabel *TextLabel1_5_2;
    QComboBox *ui_intPointMode;
    QComboBox *ui_intLineMode;
    QLabel *TextLabel1_3;
    QSpinBox *ui_intLineWidth;
    QSpacerItem *Spacer3_2_3_2;
    QSpacerItem *Spacer234;
    Q3ButtonGroup *ButtonGroup12;
    QGridLayout *gridLayout2;
    QLabel *TextLabel2_4_2_2;
    QLabel *TextLabel3_3_2_2_2;
    QLineEdit *ui_intScale;
    QLineEdit *ui_intOffset;
    QLabel *TextLabel3_3_2_3;
    QLineEdit *ui_intThreshold;
    QSpacerItem *Spacer47;

    void setupUi(PrefWidget *UIIntegrationPrefs)
    {
        if (UIIntegrationPrefs->objectName().isEmpty())
            UIIntegrationPrefs->setObjectName(QString::fromUtf8("UIIntegrationPrefs"));
        UIIntegrationPrefs->resize(366, 267);
        vboxLayout = new QVBoxLayout(UIIntegrationPrefs);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_showInt = new QCheckBox(UIIntegrationPrefs);
        ui_showInt->setObjectName(QString::fromUtf8("ui_showInt"));

        hboxLayout->addWidget(ui_showInt);

        Spacer40_2_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Spacer40_2_2);


        vboxLayout->addLayout(hboxLayout);

        ButtonGroup15 = new Q3ButtonGroup(UIIntegrationPrefs);
        ButtonGroup15->setObjectName(QString::fromUtf8("ButtonGroup15"));
        ButtonGroup15->setEnabled(false);
        ButtonGroup15->setColumnLayout(0, Qt::Vertical);
        ButtonGroup15->layout()->setSpacing(5);
        ButtonGroup15->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout = new QGridLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(ButtonGroup15->layout());
        if (boxlayout)
            boxlayout->addLayout(gridLayout);
        gridLayout->setAlignment(Qt::AlignTop);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_intColor = new ColorButton(ButtonGroup15);
        ui_intColor->setObjectName(QString::fromUtf8("ui_intColor"));
        ui_intColor->setMinimumSize(QSize(50, 0));
        ui_intColor->setMaximumSize(QSize(50, 32767));

        hboxLayout1->addWidget(ui_intColor);

        label_2_2_2_3 = new QLabel(ButtonGroup15);
        label_2_2_2_3->setObjectName(QString::fromUtf8("label_2_2_2_3"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2_2_2_3->sizePolicy().hasHeightForWidth());
        label_2_2_2_3->setSizePolicy(sizePolicy);
        label_2_2_2_3->setWordWrap(false);

        hboxLayout1->addWidget(label_2_2_2_3);


        gridLayout->addLayout(hboxLayout1, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ui_intThresholdColor = new ColorButton(ButtonGroup15);
        ui_intThresholdColor->setObjectName(QString::fromUtf8("ui_intThresholdColor"));
        ui_intThresholdColor->setMinimumSize(QSize(50, 0));
        ui_intThresholdColor->setMaximumSize(QSize(50, 32767));

        hboxLayout2->addWidget(ui_intThresholdColor);

        label_2_2_2_2_2 = new QLabel(ButtonGroup15);
        label_2_2_2_2_2->setObjectName(QString::fromUtf8("label_2_2_2_2_2"));
        sizePolicy.setHeightForWidth(label_2_2_2_2_2->sizePolicy().hasHeightForWidth());
        label_2_2_2_2_2->setSizePolicy(sizePolicy);
        label_2_2_2_2_2->setWordWrap(false);

        hboxLayout2->addWidget(label_2_2_2_2_2);


        gridLayout->addLayout(hboxLayout2, 0, 1, 1, 1);


        vboxLayout->addWidget(ButtonGroup15);

        ButtonGroup16 = new Q3ButtonGroup(UIIntegrationPrefs);
        ButtonGroup16->setObjectName(QString::fromUtf8("ButtonGroup16"));
        ButtonGroup16->setEnabled(false);
        ButtonGroup16->setColumnLayout(0, Qt::Vertical);
        ButtonGroup16->layout()->setSpacing(5);
        ButtonGroup16->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout1 = new QGridLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(ButtonGroup16->layout());
        if (boxlayout1)
            boxlayout1->addLayout(gridLayout1);
        gridLayout1->setAlignment(Qt::AlignTop);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TextLabel1_3_2_2 = new QLabel(ButtonGroup16);
        TextLabel1_3_2_2->setObjectName(QString::fromUtf8("TextLabel1_3_2_2"));
        TextLabel1_3_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1_3_2_2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1_3_2_2, 1, 0, 1, 1);

        TextLabel1_5_2 = new QLabel(ButtonGroup16);
        TextLabel1_5_2->setObjectName(QString::fromUtf8("TextLabel1_5_2"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TextLabel1_5_2->sizePolicy().hasHeightForWidth());
        TextLabel1_5_2->setSizePolicy(sizePolicy1);
        TextLabel1_5_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1_5_2->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1_5_2, 0, 0, 1, 1);

        ui_intPointMode = new QComboBox(ButtonGroup16);
        ui_intPointMode->setObjectName(QString::fromUtf8("ui_intPointMode"));

        gridLayout1->addWidget(ui_intPointMode, 1, 1, 1, 1);

        ui_intLineMode = new QComboBox(ButtonGroup16);
        ui_intLineMode->setObjectName(QString::fromUtf8("ui_intLineMode"));

        gridLayout1->addWidget(ui_intLineMode, 0, 1, 1, 1);

        TextLabel1_3 = new QLabel(ButtonGroup16);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
        TextLabel1_3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1_3->setWordWrap(false);

        gridLayout1->addWidget(TextLabel1_3, 0, 2, 1, 1);

        ui_intLineWidth = new QSpinBox(ButtonGroup16);
        ui_intLineWidth->setObjectName(QString::fromUtf8("ui_intLineWidth"));
        ui_intLineWidth->setMaximumSize(QSize(50, 32767));
        ui_intLineWidth->setMaximum(5);
        ui_intLineWidth->setMinimum(1);
        ui_intLineWidth->setValue(1);

        gridLayout1->addWidget(ui_intLineWidth, 0, 3, 1, 1);

        Spacer3_2_3_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer3_2_3_2, 1, 2, 1, 3);

        Spacer234 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer234, 0, 4, 1, 1);


        vboxLayout->addWidget(ButtonGroup16);

        ButtonGroup12 = new Q3ButtonGroup(UIIntegrationPrefs);
        ButtonGroup12->setObjectName(QString::fromUtf8("ButtonGroup12"));
        ButtonGroup12->setEnabled(false);
        ButtonGroup12->setColumnLayout(0, Qt::Vertical);
        ButtonGroup12->layout()->setSpacing(5);
        ButtonGroup12->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout2 = new QGridLayout();
        QBoxLayout *boxlayout2 = qobject_cast<QBoxLayout *>(ButtonGroup12->layout());
        if (boxlayout2)
            boxlayout2->addLayout(gridLayout2);
        gridLayout2->setAlignment(Qt::AlignTop);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        TextLabel2_4_2_2 = new QLabel(ButtonGroup12);
        TextLabel2_4_2_2->setObjectName(QString::fromUtf8("TextLabel2_4_2_2"));
        TextLabel2_4_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel2_4_2_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel2_4_2_2, 1, 0, 1, 1);

        TextLabel3_3_2_2_2 = new QLabel(ButtonGroup12);
        TextLabel3_3_2_2_2->setObjectName(QString::fromUtf8("TextLabel3_3_2_2_2"));
        TextLabel3_3_2_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel3_3_2_2_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel3_3_2_2_2, 2, 0, 1, 1);

        ui_intScale = new QLineEdit(ButtonGroup12);
        ui_intScale->setObjectName(QString::fromUtf8("ui_intScale"));
        ui_intScale->setMaxLength(12);

        gridLayout2->addWidget(ui_intScale, 1, 1, 1, 1);

        ui_intOffset = new QLineEdit(ButtonGroup12);
        ui_intOffset->setObjectName(QString::fromUtf8("ui_intOffset"));
        ui_intOffset->setMaxLength(12);

        gridLayout2->addWidget(ui_intOffset, 1, 3, 1, 1);

        TextLabel3_3_2_3 = new QLabel(ButtonGroup12);
        TextLabel3_3_2_3->setObjectName(QString::fromUtf8("TextLabel3_3_2_3"));
        TextLabel3_3_2_3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel3_3_2_3->setWordWrap(false);

        gridLayout2->addWidget(TextLabel3_3_2_3, 1, 2, 1, 1);

        ui_intThreshold = new QLineEdit(ButtonGroup12);
        ui_intThreshold->setObjectName(QString::fromUtf8("ui_intThreshold"));
        ui_intThreshold->setMaxLength(12);

        gridLayout2->addWidget(ui_intThreshold, 2, 1, 1, 1);


        vboxLayout->addWidget(ButtonGroup12);

        Spacer47 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer47);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(ui_showInt, ui_intLineMode);
        QWidget::setTabOrder(ui_intLineMode, ui_intLineWidth);
        QWidget::setTabOrder(ui_intLineWidth, ui_intPointMode);
        QWidget::setTabOrder(ui_intPointMode, ui_intScale);
        QWidget::setTabOrder(ui_intScale, ui_intOffset);
        QWidget::setTabOrder(ui_intOffset, ui_intThreshold);

        retranslateUi(UIIntegrationPrefs);
        QObject::connect(ui_showInt, SIGNAL(toggled(bool)), ButtonGroup15, SLOT(setEnabled(bool)));
        QObject::connect(ui_showInt, SIGNAL(toggled(bool)), ButtonGroup16, SLOT(setEnabled(bool)));
        QObject::connect(ui_showInt, SIGNAL(toggled(bool)), ButtonGroup12, SLOT(setEnabled(bool)));

        ui_intPointMode->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UIIntegrationPrefs);
    } // setupUi

    void retranslateUi(PrefWidget *UIIntegrationPrefs)
    {
        UIIntegrationPrefs->setCaption(QApplication::translate("UIIntegrationPrefs", "QFrameForm", 0, QApplication::UnicodeUTF8));
        ui_showInt->setText(QApplication::translate("UIIntegrationPrefs", "Show integration", 0, QApplication::UnicodeUTF8));
        ButtonGroup15->setTitle(QApplication::translate("UIIntegrationPrefs", "Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_intColor->setWhatsThis(QApplication::translate("UIIntegrationPrefs", "Click this button so change the color of the data graph in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2_2_2_3->setText(QApplication::translate("UIIntegrationPrefs", "Integration graph", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_intThresholdColor->setWhatsThis(QApplication::translate("UIIntegrationPrefs", "Click this button so change the color of the data graph in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2_2_2_2_2->setText(QApplication::translate("UIIntegrationPrefs", "Integration threshold", 0, QApplication::UnicodeUTF8));
        ButtonGroup16->setTitle(QApplication::translate("UIIntegrationPrefs", "Drawing style", 0, QApplication::UnicodeUTF8));
        TextLabel1_3_2_2->setText(QApplication::translate("UIIntegrationPrefs", "Point style:", 0, QApplication::UnicodeUTF8));
        TextLabel1_5_2->setText(QApplication::translate("UIIntegrationPrefs", "Line style:", 0, QApplication::UnicodeUTF8));
        ui_intPointMode->clear();
        ui_intPointMode->insertItems(0, QStringList()
         << QApplication::translate("UIIntegrationPrefs", "No points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Diamond", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Large Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Large Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Large Diamond", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Large X", 0, QApplication::UnicodeUTF8)
        );
        ui_intLineMode->clear();
        ui_intLineMode->insertItems(0, QStringList()
         << QApplication::translate("UIIntegrationPrefs", "No line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Solid line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIIntegrationPrefs", "Dotted line", 0, QApplication::UnicodeUTF8)
        );
        TextLabel1_3->setText(QApplication::translate("UIIntegrationPrefs", "Width:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_intLineWidth->setWhatsThis(QApplication::translate("UIIntegrationPrefs", "Here you can choose the line width of the data graph in the recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ButtonGroup12->setTitle(QApplication::translate("UIIntegrationPrefs", "Graph", 0, QApplication::UnicodeUTF8));
        TextLabel2_4_2_2->setText(QApplication::translate("UIIntegrationPrefs", "Scale:", 0, QApplication::UnicodeUTF8));
        TextLabel3_3_2_2_2->setText(QApplication::translate("UIIntegrationPrefs", "Threshold:", 0, QApplication::UnicodeUTF8));
        ui_intScale->setText(QApplication::translate("UIIntegrationPrefs", "1.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_intScale->setWhatsThis(QApplication::translate("UIIntegrationPrefs", "Scaling factor for integration curve.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_intOffset->setText(QApplication::translate("UIIntegrationPrefs", "0.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_intOffset->setWhatsThis(QApplication::translate("UIIntegrationPrefs", "Amplitude offset for integration curve.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel3_3_2_3->setText(QApplication::translate("UIIntegrationPrefs", "Offset:", 0, QApplication::UnicodeUTF8));
        ui_intThreshold->setText(QApplication::translate("UIIntegrationPrefs", "0.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_intThreshold->setWhatsThis(QApplication::translate("UIIntegrationPrefs", "If sampled value gets below this offset the integration curve is reset to zero.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
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
    class UIIntegrationPrefs: public Ui_UIIntegrationPrefs {};
} // namespace Ui

QT_END_NAMESPACE

class UIIntegrationPrefs : public PrefWidget, public Ui::UIIntegrationPrefs
{
    Q_OBJECT

public:
    UIIntegrationPrefs(QWidget* parent = 0, const char* name = 0);
    ~UIIntegrationPrefs();

protected slots:
    virtual void languageChange();

};

#endif // UIINTEGRATIONPREFS_H
