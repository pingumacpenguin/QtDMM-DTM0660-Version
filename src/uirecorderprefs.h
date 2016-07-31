#ifndef UIRECORDERPREFS_H
#define UIRECORDERPREFS_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <prefwidget.h>

QT_BEGIN_NAMESPACE

class Ui_UIRecorderPrefs
{
public:
    QVBoxLayout *vboxLayout;
    Q3ButtonGroup *ButtonGroup1;
    QGridLayout *gridLayout;
    QLabel *sampLabel;
    QComboBox *ui_sampleUnit;
    QSpacerItem *Spacer9;
    QLabel *sampLabel_2;
    QComboBox *timeUnit;
    QSpinBox *sampleEvery;
    QSpinBox *sampleTime;
    Q3GroupBox *GroupBox1;
    QVBoxLayout *vboxLayout1;
    Q3ButtonGroup *ButtonGroup32;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QRadioButton *manualBut;
    QSpacerItem *Spacer7_2;
    QHBoxLayout *hboxLayout1;
    QRadioButton *predefinedBut;
    QSpacerItem *Spacer8_2;
    QHBoxLayout *hboxLayout2;
    QHBoxLayout *hboxLayout3;
    QLabel *TextLabel5;
    QHBoxLayout *hboxLayout4;
    QSpinBox *hour;
    QLabel *TextLabel3;
    QSpinBox *minute;
    QLabel *TextLabel4;
    QSpinBox *second;
    QSpacerItem *Spacer2_2;
    QHBoxLayout *hboxLayout5;
    QRadioButton *triggerBut;
    QSpacerItem *Spacer9_2;
    Q3ButtonGroup *ButtonGroup13;
    QVBoxLayout *vboxLayout3;
    QGridLayout *gridLayout1;
    QSpacerItem *Spacer3;
    QLineEdit *ui_fallingThreshold;
    QSpacerItem *Spacer4_2;
    QLineEdit *ui_raisingThreshold;
    QLabel *TextLabel7;
    QLabel *TextLabel8;
    QHBoxLayout *hboxLayout6;
    QLabel *TextLabel6;
    QRadioButton *raisingBut;
    QHBoxLayout *hboxLayout7;
    QLabel *TextLabel6_2;
    QRadioButton *fallingBut;
    QGridLayout *gridLayout2;
    QCheckBox *ui_preTrigger;
    QSpacerItem *Spacer9_3;
    QSpinBox *ui_preTriggerTime;
    QComboBox *ui_preTriggerUnit;
    QLabel *TextLabel6_2_2_2;
    QLabel *TextLabel6_2_2;
    QSpacerItem *Spacer10;
    QLabel *sampLabel_2_2;
    QSpacerItem *Spacer1_2;

    void setupUi(PrefWidget *UIRecorderPrefs)
    {
        if (UIRecorderPrefs->objectName().isEmpty())
            UIRecorderPrefs->setObjectName(QString::fromUtf8("UIRecorderPrefs"));
        UIRecorderPrefs->resize(317, 366);
        vboxLayout = new QVBoxLayout(UIRecorderPrefs);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ButtonGroup1 = new Q3ButtonGroup(UIRecorderPrefs);
        ButtonGroup1->setObjectName(QString::fromUtf8("ButtonGroup1"));
        ButtonGroup1->setExclusive(false);
        ButtonGroup1->setColumnLayout(0, Qt::Vertical);
        ButtonGroup1->layout()->setSpacing(5);
        ButtonGroup1->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout = new QGridLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(ButtonGroup1->layout());
        if (boxlayout)
            boxlayout->addLayout(gridLayout);
        gridLayout->setAlignment(Qt::AlignTop);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sampLabel = new QLabel(ButtonGroup1);
        sampLabel->setObjectName(QString::fromUtf8("sampLabel"));
        sampLabel->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        sampLabel->setWordWrap(false);

        gridLayout->addWidget(sampLabel, 0, 0, 1, 1);

        ui_sampleUnit = new QComboBox(ButtonGroup1);
        ui_sampleUnit->setObjectName(QString::fromUtf8("ui_sampleUnit"));

        gridLayout->addWidget(ui_sampleUnit, 0, 2, 1, 1);

        Spacer9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer9, 0, 3, 1, 1);

        sampLabel_2 = new QLabel(ButtonGroup1);
        sampLabel_2->setObjectName(QString::fromUtf8("sampLabel_2"));
        sampLabel_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        sampLabel_2->setWordWrap(false);

        gridLayout->addWidget(sampLabel_2, 1, 0, 1, 1);

        timeUnit = new QComboBox(ButtonGroup1);
        timeUnit->setObjectName(QString::fromUtf8("timeUnit"));

        gridLayout->addWidget(timeUnit, 1, 2, 1, 1);

        sampleEvery = new QSpinBox(ButtonGroup1);
        sampleEvery->setObjectName(QString::fromUtf8("sampleEvery"));
        sampleEvery->setMaximum(99999);
        sampleEvery->setMinimum(1);
        sampleEvery->setValue(1);

        gridLayout->addWidget(sampleEvery, 0, 1, 1, 1);

        sampleTime = new QSpinBox(ButtonGroup1);
        sampleTime->setObjectName(QString::fromUtf8("sampleTime"));
        sampleTime->setMaximum(99999);
        sampleTime->setMinimum(0);
        sampleTime->setValue(0);

        gridLayout->addWidget(sampleTime, 1, 1, 1, 1);


        vboxLayout->addWidget(ButtonGroup1);

        GroupBox1 = new Q3GroupBox(UIRecorderPrefs);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        GroupBox1->setColumnLayout(0, Qt::Vertical);
        GroupBox1->layout()->setSpacing(5);
        GroupBox1->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout1 = new QVBoxLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(GroupBox1->layout());
        if (boxlayout1)
            boxlayout1->addLayout(vboxLayout1);
        vboxLayout1->setAlignment(Qt::AlignTop);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        ButtonGroup32 = new Q3ButtonGroup(GroupBox1);
        ButtonGroup32->setObjectName(QString::fromUtf8("ButtonGroup32"));
        ButtonGroup32->setFrameShape(Q3GroupBox::NoFrame);
        ButtonGroup32->setExclusive(false);
        ButtonGroup32->setColumnLayout(0, Qt::Vertical);
        ButtonGroup32->layout()->setSpacing(5);
        ButtonGroup32->layout()->setContentsMargins(0, 0, 0, 0);
        vboxLayout2 = new QVBoxLayout();
        QBoxLayout *boxlayout2 = qobject_cast<QBoxLayout *>(ButtonGroup32->layout());
        if (boxlayout2)
            boxlayout2->addLayout(vboxLayout2);
        vboxLayout2->setAlignment(Qt::AlignTop);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        manualBut = new QRadioButton(ButtonGroup32);
        manualBut->setObjectName(QString::fromUtf8("manualBut"));
        manualBut->setChecked(true);

        hboxLayout->addWidget(manualBut);

        Spacer7_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Spacer7_2);


        vboxLayout2->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        predefinedBut = new QRadioButton(ButtonGroup32);
        predefinedBut->setObjectName(QString::fromUtf8("predefinedBut"));

        hboxLayout1->addWidget(predefinedBut);

        Spacer8_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Spacer8_2);


        vboxLayout2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        TextLabel5 = new QLabel(ButtonGroup32);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel5->sizePolicy().hasHeightForWidth());
        TextLabel5->setSizePolicy(sizePolicy);
        TextLabel5->setMinimumSize(QSize(20, 0));
        TextLabel5->setWordWrap(false);

        hboxLayout3->addWidget(TextLabel5);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hour = new QSpinBox(ButtonGroup32);
        hour->setObjectName(QString::fromUtf8("hour"));
        hour->setEnabled(false);
        hour->setWrapping(true);
        hour->setMaximum(23);

        hboxLayout4->addWidget(hour);

        TextLabel3 = new QLabel(ButtonGroup32);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setEnabled(false);
        QFont font;
        font.setBold(true);
        TextLabel3->setFont(font);
        TextLabel3->setAlignment(Qt::AlignCenter);
        TextLabel3->setWordWrap(false);

        hboxLayout4->addWidget(TextLabel3);

        minute = new QSpinBox(ButtonGroup32);
        minute->setObjectName(QString::fromUtf8("minute"));
        minute->setEnabled(false);
        minute->setWrapping(true);
        minute->setMaximum(59);

        hboxLayout4->addWidget(minute);

        TextLabel4 = new QLabel(ButtonGroup32);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setEnabled(false);
        TextLabel4->setFont(font);
        TextLabel4->setAlignment(Qt::AlignCenter);
        TextLabel4->setWordWrap(false);

        hboxLayout4->addWidget(TextLabel4);

        second = new QSpinBox(ButtonGroup32);
        second->setObjectName(QString::fromUtf8("second"));
        second->setEnabled(false);
        second->setWrapping(true);
        second->setMaximum(59);

        hboxLayout4->addWidget(second);


        hboxLayout3->addLayout(hboxLayout4);


        hboxLayout2->addLayout(hboxLayout3);

        Spacer2_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer2_2);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(5);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        triggerBut = new QRadioButton(ButtonGroup32);
        triggerBut->setObjectName(QString::fromUtf8("triggerBut"));

        hboxLayout5->addWidget(triggerBut);

        Spacer9_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(Spacer9_2);


        vboxLayout2->addLayout(hboxLayout5);


        vboxLayout1->addWidget(ButtonGroup32);

        ButtonGroup13 = new Q3ButtonGroup(GroupBox1);
        ButtonGroup13->setObjectName(QString::fromUtf8("ButtonGroup13"));
        ButtonGroup13->setFrameShape(Q3GroupBox::NoFrame);
        ButtonGroup13->setExclusive(false);
        ButtonGroup13->setColumnLayout(0, Qt::Vertical);
        ButtonGroup13->layout()->setSpacing(0);
        ButtonGroup13->layout()->setContentsMargins(0, 0, 0, 0);
        vboxLayout3 = new QVBoxLayout();
        QBoxLayout *boxlayout3 = qobject_cast<QBoxLayout *>(ButtonGroup13->layout());
        if (boxlayout3)
            boxlayout3->addLayout(vboxLayout3);
        vboxLayout3->setAlignment(Qt::AlignTop);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(5);
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        Spacer3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer3, 0, 3, 1, 1);

        ui_fallingThreshold = new QLineEdit(ButtonGroup13);
        ui_fallingThreshold->setObjectName(QString::fromUtf8("ui_fallingThreshold"));
        ui_fallingThreshold->setEnabled(false);
        ui_fallingThreshold->setMaximumSize(QSize(80, 32767));
        ui_fallingThreshold->setMaxLength(12);

        gridLayout1->addWidget(ui_fallingThreshold, 1, 2, 1, 1);

        Spacer4_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(Spacer4_2, 1, 3, 1, 1);

        ui_raisingThreshold = new QLineEdit(ButtonGroup13);
        ui_raisingThreshold->setObjectName(QString::fromUtf8("ui_raisingThreshold"));
        ui_raisingThreshold->setEnabled(false);
        ui_raisingThreshold->setMaximumSize(QSize(80, 32767));
        ui_raisingThreshold->setMaxLength(12);

        gridLayout1->addWidget(ui_raisingThreshold, 0, 2, 1, 1);

        TextLabel7 = new QLabel(ButtonGroup13);
        TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
        TextLabel7->setEnabled(false);
        TextLabel7->setWordWrap(false);

        gridLayout1->addWidget(TextLabel7, 0, 1, 1, 1);

        TextLabel8 = new QLabel(ButtonGroup13);
        TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));
        TextLabel8->setEnabled(false);
        TextLabel8->setWordWrap(false);

        gridLayout1->addWidget(TextLabel8, 1, 1, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(5);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        TextLabel6 = new QLabel(ButtonGroup13);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        sizePolicy.setHeightForWidth(TextLabel6->sizePolicy().hasHeightForWidth());
        TextLabel6->setSizePolicy(sizePolicy);
        TextLabel6->setMinimumSize(QSize(20, 0));
        TextLabel6->setWordWrap(false);

        hboxLayout6->addWidget(TextLabel6);

        raisingBut = new QRadioButton(ButtonGroup13);
        raisingBut->setObjectName(QString::fromUtf8("raisingBut"));
        raisingBut->setEnabled(false);
        raisingBut->setChecked(true);

        hboxLayout6->addWidget(raisingBut);


        gridLayout1->addLayout(hboxLayout6, 0, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(5);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        TextLabel6_2 = new QLabel(ButtonGroup13);
        TextLabel6_2->setObjectName(QString::fromUtf8("TextLabel6_2"));
        sizePolicy.setHeightForWidth(TextLabel6_2->sizePolicy().hasHeightForWidth());
        TextLabel6_2->setSizePolicy(sizePolicy);
        TextLabel6_2->setMinimumSize(QSize(20, 0));
        TextLabel6_2->setWordWrap(false);

        hboxLayout7->addWidget(TextLabel6_2);

        fallingBut = new QRadioButton(ButtonGroup13);
        fallingBut->setObjectName(QString::fromUtf8("fallingBut"));
        fallingBut->setEnabled(false);

        hboxLayout7->addWidget(fallingBut);


        gridLayout1->addLayout(hboxLayout7, 1, 0, 1, 1);


        vboxLayout3->addLayout(gridLayout1);


        vboxLayout1->addWidget(ButtonGroup13);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(5);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        ui_preTrigger = new QCheckBox(GroupBox1);
        ui_preTrigger->setObjectName(QString::fromUtf8("ui_preTrigger"));
        ui_preTrigger->setEnabled(false);

        gridLayout2->addWidget(ui_preTrigger, 0, 1, 1, 1);

        Spacer9_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(Spacer9_3, 1, 4, 1, 1);

        ui_preTriggerTime = new QSpinBox(GroupBox1);
        ui_preTriggerTime->setObjectName(QString::fromUtf8("ui_preTriggerTime"));
        ui_preTriggerTime->setEnabled(false);
        ui_preTriggerTime->setMaximum(99999);
        ui_preTriggerTime->setMinimum(1);
        ui_preTriggerTime->setValue(1);

        gridLayout2->addWidget(ui_preTriggerTime, 1, 2, 1, 1);

        ui_preTriggerUnit = new QComboBox(GroupBox1);
        ui_preTriggerUnit->setObjectName(QString::fromUtf8("ui_preTriggerUnit"));
        ui_preTriggerUnit->setEnabled(false);

        gridLayout2->addWidget(ui_preTriggerUnit, 1, 3, 1, 1);

        TextLabel6_2_2_2 = new QLabel(GroupBox1);
        TextLabel6_2_2_2->setObjectName(QString::fromUtf8("TextLabel6_2_2_2"));
        sizePolicy.setHeightForWidth(TextLabel6_2_2_2->sizePolicy().hasHeightForWidth());
        TextLabel6_2_2_2->setSizePolicy(sizePolicy);
        TextLabel6_2_2_2->setMinimumSize(QSize(20, 0));
        TextLabel6_2_2_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel6_2_2_2, 1, 0, 1, 1);

        TextLabel6_2_2 = new QLabel(GroupBox1);
        TextLabel6_2_2->setObjectName(QString::fromUtf8("TextLabel6_2_2"));
        sizePolicy.setHeightForWidth(TextLabel6_2_2->sizePolicy().hasHeightForWidth());
        TextLabel6_2_2->setSizePolicy(sizePolicy);
        TextLabel6_2_2->setMinimumSize(QSize(20, 0));
        TextLabel6_2_2->setWordWrap(false);

        gridLayout2->addWidget(TextLabel6_2_2, 0, 0, 1, 1);

        Spacer10 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(Spacer10, 0, 2, 1, 3);

        sampLabel_2_2 = new QLabel(GroupBox1);
        sampLabel_2_2->setObjectName(QString::fromUtf8("sampLabel_2_2"));
        sampLabel_2_2->setEnabled(false);
        sampLabel_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        sampLabel_2_2->setWordWrap(false);

        gridLayout2->addWidget(sampLabel_2_2, 1, 1, 1, 1);


        vboxLayout1->addLayout(gridLayout2);


        vboxLayout->addWidget(GroupBox1);

        Spacer1_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer1_2);

#ifndef QT_NO_SHORTCUT
        sampLabel->setBuddy(sampleEvery);
        sampLabel_2->setBuddy(sampleTime);
        sampLabel_2_2->setBuddy(sampleTime);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(sampleEvery, ui_sampleUnit);
        QWidget::setTabOrder(ui_sampleUnit, sampleTime);
        QWidget::setTabOrder(sampleTime, timeUnit);
        QWidget::setTabOrder(timeUnit, manualBut);
        QWidget::setTabOrder(manualBut, predefinedBut);
        QWidget::setTabOrder(predefinedBut, hour);
        QWidget::setTabOrder(hour, minute);
        QWidget::setTabOrder(minute, second);
        QWidget::setTabOrder(second, triggerBut);
        QWidget::setTabOrder(triggerBut, raisingBut);
        QWidget::setTabOrder(raisingBut, ui_raisingThreshold);
        QWidget::setTabOrder(ui_raisingThreshold, fallingBut);
        QWidget::setTabOrder(fallingBut, ui_fallingThreshold);

        retranslateUi(UIRecorderPrefs);
        QObject::connect(predefinedBut, SIGNAL(toggled(bool)), hour, SLOT(setEnabled(bool)));
        QObject::connect(predefinedBut, SIGNAL(toggled(bool)), TextLabel3, SLOT(setEnabled(bool)));
        QObject::connect(predefinedBut, SIGNAL(toggled(bool)), minute, SLOT(setEnabled(bool)));
        QObject::connect(predefinedBut, SIGNAL(toggled(bool)), second, SLOT(setEnabled(bool)));
        QObject::connect(predefinedBut, SIGNAL(toggled(bool)), TextLabel4, SLOT(setEnabled(bool)));
        QObject::connect(triggerBut, SIGNAL(toggled(bool)), raisingBut, SLOT(setEnabled(bool)));
        QObject::connect(triggerBut, SIGNAL(toggled(bool)), fallingBut, SLOT(setEnabled(bool)));
        QObject::connect(triggerBut, SIGNAL(toggled(bool)), TextLabel7, SLOT(setEnabled(bool)));
        QObject::connect(triggerBut, SIGNAL(toggled(bool)), TextLabel8, SLOT(setEnabled(bool)));
        QObject::connect(triggerBut, SIGNAL(toggled(bool)), ui_raisingThreshold, SLOT(setEnabled(bool)));
        QObject::connect(triggerBut, SIGNAL(toggled(bool)), ui_fallingThreshold, SLOT(setEnabled(bool)));
        QObject::connect(raisingBut, SIGNAL(toggled(bool)), TextLabel7, SLOT(setEnabled(bool)));
        QObject::connect(raisingBut, SIGNAL(toggled(bool)), ui_raisingThreshold, SLOT(setEnabled(bool)));
        QObject::connect(raisingBut, SIGNAL(toggled(bool)), TextLabel8, SLOT(setDisabled(bool)));
        QObject::connect(raisingBut, SIGNAL(toggled(bool)), ui_fallingThreshold, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(UIRecorderPrefs);
    } // setupUi

    void retranslateUi(PrefWidget *UIRecorderPrefs)
    {
        UIRecorderPrefs->setCaption(QApplication::translate("UIRecorderPrefs", "QFrameForm", 0, QApplication::UnicodeUTF8));
        ButtonGroup1->setTitle(QApplication::translate("UIRecorderPrefs", "Sampling", 0, QApplication::UnicodeUTF8));
        sampLabel->setText(QApplication::translate("UIRecorderPrefs", "Sample &every:", 0, QApplication::UnicodeUTF8));
        ui_sampleUnit->clear();
        ui_sampleUnit->insertItems(0, QStringList()
         << QApplication::translate("UIRecorderPrefs", "1/10 Seconds", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Seconds", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Hours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Days", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_sampleUnit->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Unit for sampling period.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        sampLabel_2->setText(QApplication::translate("UIRecorderPrefs", "Sample t&ime:", 0, QApplication::UnicodeUTF8));
        timeUnit->clear();
        timeUnit->insertItems(0, QStringList()
         << QApplication::translate("UIRecorderPrefs", "Seconds", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Hours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Days", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        timeUnit->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Unit for maximum sampling time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        sampleEvery->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Specify the sampling period. See unit to the right.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        sampleTime->setSpecialValueText(QApplication::translate("UIRecorderPrefs", "Infinite", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        sampleTime->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Maximum sampling time. When this time expires, the recorder is stopped automatically.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        GroupBox1->setTitle(QApplication::translate("UIRecorderPrefs", "Start", 0, QApplication::UnicodeUTF8));
        ButtonGroup32->setTitle(QString());
        manualBut->setText(QApplication::translate("UIRecorderPrefs", "&Manual", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        manualBut->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Select this entry if you want to manually start the transient recorder. Use the <b>Start</b> and <b>Stop</b> buttons in the main window to start/stop sampling.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        predefinedBut->setText(QApplication::translate("UIRecorderPrefs", "&Predefined time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        predefinedBut->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Select this entry if you want the transient recorder to be started at a predefined time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        hour->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Hour of start time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel3->setText(QApplication::translate("UIRecorderPrefs", ":", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        minute->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Minutes of start time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel4->setText(QApplication::translate("UIRecorderPrefs", ":", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        second->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Seconds of start time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        triggerBut->setText(QApplication::translate("UIRecorderPrefs", "&Trigger", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        triggerBut->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Select this entry if you want to automatically trigger the sampling. <p>\n"
"You have two choices:\n"
"<ul>\n"
"<li><b>Raising edge:</b> Sampling is started when the measured value gets bigger than the given threshold.</li>\n"
"<li><b>Falling edge:</b> Sampling is started when the measured value gets lower than the given threshold.</li>\n"
"</ul>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ButtonGroup13->setTitle(QString());
        ui_fallingThreshold->setText(QApplication::translate("UIRecorderPrefs", "0.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_fallingThreshold->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Threshold for falling edge.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_raisingThreshold->setText(QApplication::translate("UIRecorderPrefs", "0.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_raisingThreshold->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Threshold for raising edge.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel7->setText(QApplication::translate("UIRecorderPrefs", "Threshold:", 0, QApplication::UnicodeUTF8));
        TextLabel8->setText(QApplication::translate("UIRecorderPrefs", "Threshold:", 0, QApplication::UnicodeUTF8));
        raisingBut->setText(QApplication::translate("UIRecorderPrefs", "&Raising edge", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        raisingBut->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Trigger sampling on raising edge.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fallingBut->setText(QApplication::translate("UIRecorderPrefs", "&Falling edge", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        fallingBut->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Trigger sampling on falling edge.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_preTrigger->setText(QApplication::translate("UIRecorderPrefs", "Pre trigger", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_preTriggerTime->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Maximum sampling time. When this time expires, the recorder is stopped automatically.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_preTriggerUnit->clear();
        ui_preTriggerUnit->insertItems(0, QStringList()
         << QApplication::translate("UIRecorderPrefs", "Seconds", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Hours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UIRecorderPrefs", "Days", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        ui_preTriggerUnit->setWhatsThis(QApplication::translate("UIRecorderPrefs", "Unit for maximum sampling time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        sampLabel_2_2->setText(QApplication::translate("UIRecorderPrefs", "Pre trigger time:", 0, QApplication::UnicodeUTF8));
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
    class UIRecorderPrefs: public Ui_UIRecorderPrefs {};
} // namespace Ui

QT_END_NAMESPACE

class UIRecorderPrefs : public PrefWidget, public Ui::UIRecorderPrefs
{
    Q_OBJECT

public:
    UIRecorderPrefs(QWidget* parent = 0, const char* name = 0);
    ~UIRecorderPrefs();

protected slots:
    virtual void languageChange();

};

#endif // UIRECORDERPREFS_H
