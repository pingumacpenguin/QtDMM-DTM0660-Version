#ifndef UISCALEPREFS_H
#define UISCALEPREFS_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <prefwidget.h>

QT_BEGIN_NAMESPACE

class Ui_UIScalePrefs
{
public:
    QVBoxLayout *vboxLayout;
    Q3ButtonGroup *ButtonGroup36;
    QVBoxLayout *vboxLayout1;
    QRadioButton *autoScaleBut;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel9_2;
    QCheckBox *ui_includeZero;
    QSpacerItem *Spacer14;
    QRadioButton *manualScaleBut;
    QHBoxLayout *hboxLayout1;
    QLabel *TextLabel9;
    QLabel *TextLabel10;
    QLineEdit *ui_scaleMin;
    QLabel *TextLabel10_2;
    QLineEdit *ui_scaleMax;
    QSpacerItem *Spacer7;
    Q3ButtonGroup *ButtonGroup37;
    QGridLayout *gridLayout;
    QLabel *TextLabel11;
    QLabel *TextLabel12;
    QSpacerItem *Spacer8;
    QComboBox *sizeUnit;
    QComboBox *lengthUnit;
    QSpinBox *ui_winSize;
    QSpinBox *winLength;
    QSpacerItem *Spacer5;

    void setupUi(PrefWidget *UIScalePrefs)
    {
        if (UIScalePrefs->objectName().isEmpty())
            UIScalePrefs->setObjectName(QString::fromUtf8("UIScalePrefs"));
        UIScalePrefs->resize(315, 240);
        UIScalePrefs->setMaximumSize(QSize(32767, 32767));
        vboxLayout = new QVBoxLayout(UIScalePrefs);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ButtonGroup36 = new Q3ButtonGroup(UIScalePrefs);
        ButtonGroup36->setObjectName(QString::fromUtf8("ButtonGroup36"));
        ButtonGroup36->setFrameShape(Q3GroupBox::Box);
        ButtonGroup36->setFrameShadow(Q3GroupBox::Sunken);
        ButtonGroup36->setColumnLayout(0, Qt::Vertical);
        ButtonGroup36->layout()->setSpacing(5);
        ButtonGroup36->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout1 = new QVBoxLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(ButtonGroup36->layout());
        if (boxlayout)
            boxlayout->addLayout(vboxLayout1);
        vboxLayout1->setAlignment(Qt::AlignTop);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        autoScaleBut = new QRadioButton(ButtonGroup36);
        autoScaleBut->setObjectName(QString::fromUtf8("autoScaleBut"));
        autoScaleBut->setChecked(true);

        vboxLayout1->addWidget(autoScaleBut);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        TextLabel9_2 = new QLabel(ButtonGroup36);
        TextLabel9_2->setObjectName(QString::fromUtf8("TextLabel9_2"));
        TextLabel9_2->setMinimumSize(QSize(20, 0));
        TextLabel9_2->setWordWrap(false);

        hboxLayout->addWidget(TextLabel9_2);

        ui_includeZero = new QCheckBox(ButtonGroup36);
        ui_includeZero->setObjectName(QString::fromUtf8("ui_includeZero"));
        ui_includeZero->setChecked(true);

        hboxLayout->addWidget(ui_includeZero);

        Spacer14 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Spacer14);


        vboxLayout1->addLayout(hboxLayout);

        manualScaleBut = new QRadioButton(ButtonGroup36);
        manualScaleBut->setObjectName(QString::fromUtf8("manualScaleBut"));

        vboxLayout1->addWidget(manualScaleBut);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        TextLabel9 = new QLabel(ButtonGroup36);
        TextLabel9->setObjectName(QString::fromUtf8("TextLabel9"));
        TextLabel9->setMinimumSize(QSize(20, 0));
        TextLabel9->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel9);

        TextLabel10 = new QLabel(ButtonGroup36);
        TextLabel10->setObjectName(QString::fromUtf8("TextLabel10"));
        TextLabel10->setEnabled(false);
        TextLabel10->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel10);

        ui_scaleMin = new QLineEdit(ButtonGroup36);
        ui_scaleMin->setObjectName(QString::fromUtf8("ui_scaleMin"));
        ui_scaleMin->setEnabled(false);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_scaleMin->sizePolicy().hasHeightForWidth());
        ui_scaleMin->setSizePolicy(sizePolicy);
        ui_scaleMin->setMinimumSize(QSize(60, 0));
        ui_scaleMin->setMaximumSize(QSize(60, 32767));
        ui_scaleMin->setMaxLength(12);

        hboxLayout1->addWidget(ui_scaleMin);

        TextLabel10_2 = new QLabel(ButtonGroup36);
        TextLabel10_2->setObjectName(QString::fromUtf8("TextLabel10_2"));
        TextLabel10_2->setEnabled(false);
        TextLabel10_2->setWordWrap(false);

        hboxLayout1->addWidget(TextLabel10_2);

        ui_scaleMax = new QLineEdit(ButtonGroup36);
        ui_scaleMax->setObjectName(QString::fromUtf8("ui_scaleMax"));
        ui_scaleMax->setEnabled(false);
        sizePolicy.setHeightForWidth(ui_scaleMax->sizePolicy().hasHeightForWidth());
        ui_scaleMax->setSizePolicy(sizePolicy);
        ui_scaleMax->setMinimumSize(QSize(60, 0));
        ui_scaleMax->setMaximumSize(QSize(60, 32767));
        ui_scaleMax->setMaxLength(12);

        hboxLayout1->addWidget(ui_scaleMax);

        Spacer7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Spacer7);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addWidget(ButtonGroup36);

        ButtonGroup37 = new Q3ButtonGroup(UIScalePrefs);
        ButtonGroup37->setObjectName(QString::fromUtf8("ButtonGroup37"));
        ButtonGroup37->setColumnLayout(0, Qt::Vertical);
        ButtonGroup37->layout()->setSpacing(5);
        ButtonGroup37->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout = new QGridLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(ButtonGroup37->layout());
        if (boxlayout1)
            boxlayout1->addLayout(gridLayout);
        gridLayout->setAlignment(Qt::AlignTop);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel11 = new QLabel(ButtonGroup37);
        TextLabel11->setObjectName(QString::fromUtf8("TextLabel11"));
        TextLabel11->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel11->setWordWrap(false);

        gridLayout->addWidget(TextLabel11, 0, 0, 1, 1);

        TextLabel12 = new QLabel(ButtonGroup37);
        TextLabel12->setObjectName(QString::fromUtf8("TextLabel12"));
        TextLabel12->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel12->setWordWrap(false);

        gridLayout->addWidget(TextLabel12, 1, 0, 1, 1);

        Spacer8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer8, 0, 3, 1, 1);

        sizeUnit = new QComboBox(ButtonGroup37);
        sizeUnit->setObjectName(QString::fromUtf8("sizeUnit"));

        gridLayout->addWidget(sizeUnit, 0, 2, 1, 1);

        lengthUnit = new QComboBox(ButtonGroup37);
        lengthUnit->setObjectName(QString::fromUtf8("lengthUnit"));

        gridLayout->addWidget(lengthUnit, 1, 2, 1, 1);

        ui_winSize = new QSpinBox(ButtonGroup37);
        ui_winSize->setObjectName(QString::fromUtf8("ui_winSize"));
        ui_winSize->setMaximum(99999);
        ui_winSize->setMinimum(1);
        ui_winSize->setValue(600);

        gridLayout->addWidget(ui_winSize, 0, 1, 1, 1);

        winLength = new QSpinBox(ButtonGroup37);
        winLength->setObjectName(QString::fromUtf8("winLength"));
        winLength->setMaximum(99999);
        winLength->setMinimum(1);
        winLength->setValue(3600);

        gridLayout->addWidget(winLength, 1, 1, 1, 1);


        vboxLayout->addWidget(ButtonGroup37);

        Spacer5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer5);

#ifndef QT_NO_SHORTCUT
        TextLabel10->setBuddy(ui_scaleMin);
        TextLabel10_2->setBuddy(ui_scaleMax);
        TextLabel11->setBuddy(ui_winSize);
        TextLabel12->setBuddy(winLength);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(autoScaleBut, manualScaleBut);
        QWidget::setTabOrder(manualScaleBut, ui_scaleMin);
        QWidget::setTabOrder(ui_scaleMin, ui_scaleMax);
        QWidget::setTabOrder(ui_scaleMax, ui_winSize);
        QWidget::setTabOrder(ui_winSize, sizeUnit);
        QWidget::setTabOrder(sizeUnit, winLength);
        QWidget::setTabOrder(winLength, lengthUnit);

        retranslateUi(UIScalePrefs);
        QObject::connect(manualScaleBut, SIGNAL(toggled(bool)), TextLabel10, SLOT(setEnabled(bool)));
        QObject::connect(manualScaleBut, SIGNAL(toggled(bool)), ui_scaleMin, SLOT(setEnabled(bool)));
        QObject::connect(manualScaleBut, SIGNAL(toggled(bool)), TextLabel10_2, SLOT(setEnabled(bool)));
        QObject::connect(manualScaleBut, SIGNAL(toggled(bool)), ui_scaleMax, SLOT(setEnabled(bool)));
        QObject::connect(autoScaleBut, SIGNAL(toggled(bool)), ui_includeZero, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(UIScalePrefs);
    } // setupUi

    void retranslateUi(PrefWidget *UIScalePrefs)
    {
        UIScalePrefs->setCaption(QApplication::translate("UIScalePrefs", "QFrameForm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        UIScalePrefs->setWhatsThis(QApplication::translate("UIScalePrefs", "Threshold for raising edge.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ButtonGroup36->setTitle(QApplication::translate("UIScalePrefs", "Scale", 0, QApplication::UnicodeUTF8));
        autoScaleBut->setText(QApplication::translate("UIScalePrefs", "Au&tomatic", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        autoScaleBut->setWhatsThis(QApplication::translate("UIScalePrefs", "Select this entry if you want automatic scaling of the vertical scale in the transient recorder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_includeZero->setText(QApplication::translate("UIScalePrefs", "Include zero line", 0, QApplication::UnicodeUTF8));
        manualScaleBut->setText(QApplication::translate("UIScalePrefs", "&Manual", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        manualScaleBut->setWhatsThis(QApplication::translate("UIScalePrefs", "Select this entry if you want to set the minimum and maximum value for the scale manually. If selected enter the minimum and maximum values below.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel10->setText(QApplication::translate("UIScalePrefs", "M&inimum:", 0, QApplication::UnicodeUTF8));
        ui_scaleMin->setText(QApplication::translate("UIScalePrefs", "-3.999", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_scaleMin->setWhatsThis(QApplication::translate("UIScalePrefs", "Enter the minimum scale value here.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel10_2->setText(QApplication::translate("UIScalePrefs", "Ma&ximum:", 0, QApplication::UnicodeUTF8));
        ui_scaleMax->setText(QApplication::translate("UIScalePrefs", "3.999", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_scaleMax->setWhatsThis(QApplication::translate("UIScalePrefs", "Enter the maximum scale value here.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ButtonGroup37->setTitle(QApplication::translate("UIScalePrefs", "Window", 0, QApplication::UnicodeUTF8));
        TextLabel11->setText(QApplication::translate("UIScalePrefs", "&Size:", 0, QApplication::UnicodeUTF8));
        TextLabel12->setText(QApplication::translate("UIScalePrefs", "Max. &length:", 0, QApplication::UnicodeUTF8));
        sizeUnit->clear();
        sizeUnit->insertItems(0, QStringList()
         << QApplication::translate("UIScalePrefs", "Seconds", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIScalePrefs", "Minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIScalePrefs", "Hours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIScalePrefs", "Days", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        sizeUnit->setWhatsThis(QApplication::translate("UIScalePrefs", "Unit for visible window width.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lengthUnit->clear();
        lengthUnit->insertItems(0, QStringList()
         << QApplication::translate("UIScalePrefs", "Seconds", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIScalePrefs", "Minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIScalePrefs", "Hours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIScalePrefs", "Days", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_winSize->setWhatsThis(QApplication::translate("UIScalePrefs", "Size (in time) of the visible part of the recorder graph. See unit to the right.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        winLength->setWhatsThis(QApplication::translate("UIScalePrefs", "Maximum length (in time) of the recorder graph. If this time is reached the first recorded values will be discarded. It will not stop recording.", 0, QApplication::UnicodeUTF8));
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
    class UIScalePrefs: public Ui_UIScalePrefs {};
} // namespace Ui

QT_END_NAMESPACE

class UIScalePrefs : public PrefWidget, public Ui::UIScalePrefs
{
    Q_OBJECT

public:
    UIScalePrefs(QWidget* parent = 0, const char* name = 0);
    ~UIScalePrefs();

protected slots:
    virtual void languageChange();

};

#endif // UISCALEPREFS_H
