#ifndef UIEXECUTEPREFS_H
#define UIEXECUTEPREFS_H

#include <qvariant.h>
#include <prefwidget.h>


#include <Qt3Support/Q3ButtonGroup>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <prefwidget.h>

QT_BEGIN_NAMESPACE

class Ui_UIExecutePrefs
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *ui_executeCommand;
    Q3ButtonGroup *ButtonGroup9;
    QGridLayout *gridLayout;
    QLabel *TextLabel8_2_2_2;
    QLineEdit *ui_execRaisingThreshold;
    QLabel *TextLabel7_2_2_2;
    QLineEdit *ui_execFallingThreshold;
    QRadioButton *ui_execRaising;
    QRadioButton *ui_execFalling;
    QSpacerItem *Spacer4_2_2_2_2;
    QSpacerItem *Spacer3_3_2_2;
    Q3ButtonGroup *ButtonGroup10;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QCheckBox *ui_disconnectExec;
    QSpacerItem *Spacer1_9_2_2;
    QHBoxLayout *hboxLayout1;
    QLineEdit *ui_commandExec;
    QPushButton *ui_browseExec;
    QSpacerItem *Spacer1_8;

    void setupUi(PrefWidget *UIExecutePrefs)
    {
        if (UIExecutePrefs->objectName().isEmpty())
            UIExecutePrefs->setObjectName(QString::fromUtf8("UIExecutePrefs"));
        UIExecutePrefs->resize(297, 221);
        vboxLayout = new QVBoxLayout(UIExecutePrefs);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ui_executeCommand = new QCheckBox(UIExecutePrefs);
        ui_executeCommand->setObjectName(QString::fromUtf8("ui_executeCommand"));

        vboxLayout->addWidget(ui_executeCommand);

        ButtonGroup9 = new Q3ButtonGroup(UIExecutePrefs);
        ButtonGroup9->setObjectName(QString::fromUtf8("ButtonGroup9"));
        ButtonGroup9->setEnabled(false);
        ButtonGroup9->setFrameShape(Q3GroupBox::Box);
        ButtonGroup9->setFrameShadow(Q3GroupBox::Sunken);
        ButtonGroup9->setColumnLayout(0, Qt::Vertical);
        ButtonGroup9->layout()->setSpacing(5);
        ButtonGroup9->layout()->setContentsMargins(10, 10, 10, 10);
        gridLayout = new QGridLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(ButtonGroup9->layout());
        if (boxlayout)
            boxlayout->addLayout(gridLayout);
        gridLayout->setAlignment(Qt::AlignTop);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel8_2_2_2 = new QLabel(ButtonGroup9);
        TextLabel8_2_2_2->setObjectName(QString::fromUtf8("TextLabel8_2_2_2"));
        TextLabel8_2_2_2->setWordWrap(false);

        gridLayout->addWidget(TextLabel8_2_2_2, 1, 1, 1, 1);

        ui_execRaisingThreshold = new QLineEdit(ButtonGroup9);
        ui_execRaisingThreshold->setObjectName(QString::fromUtf8("ui_execRaisingThreshold"));
        ui_execRaisingThreshold->setMaximumSize(QSize(80, 32767));
        ui_execRaisingThreshold->setMaxLength(12);

        gridLayout->addWidget(ui_execRaisingThreshold, 0, 2, 1, 1);

        TextLabel7_2_2_2 = new QLabel(ButtonGroup9);
        TextLabel7_2_2_2->setObjectName(QString::fromUtf8("TextLabel7_2_2_2"));
        TextLabel7_2_2_2->setWordWrap(false);

        gridLayout->addWidget(TextLabel7_2_2_2, 0, 1, 1, 1);

        ui_execFallingThreshold = new QLineEdit(ButtonGroup9);
        ui_execFallingThreshold->setObjectName(QString::fromUtf8("ui_execFallingThreshold"));
        ui_execFallingThreshold->setMaximumSize(QSize(80, 32767));
        ui_execFallingThreshold->setMaxLength(12);

        gridLayout->addWidget(ui_execFallingThreshold, 1, 2, 1, 1);

        ui_execRaising = new QRadioButton(ButtonGroup9);
        ui_execRaising->setObjectName(QString::fromUtf8("ui_execRaising"));
        ui_execRaising->setChecked(true);

        gridLayout->addWidget(ui_execRaising, 0, 0, 1, 1);

        ui_execFalling = new QRadioButton(ButtonGroup9);
        ui_execFalling->setObjectName(QString::fromUtf8("ui_execFalling"));

        gridLayout->addWidget(ui_execFalling, 1, 0, 1, 1);

        Spacer4_2_2_2_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer4_2_2_2_2, 1, 3, 1, 1);

        Spacer3_3_2_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(Spacer3_3_2_2, 0, 3, 1, 1);


        vboxLayout->addWidget(ButtonGroup9);

        ButtonGroup10 = new Q3ButtonGroup(UIExecutePrefs);
        ButtonGroup10->setObjectName(QString::fromUtf8("ButtonGroup10"));
        ButtonGroup10->setEnabled(false);
        ButtonGroup10->setColumnLayout(0, Qt::Vertical);
        ButtonGroup10->layout()->setSpacing(5);
        ButtonGroup10->layout()->setContentsMargins(10, 10, 10, 10);
        vboxLayout1 = new QVBoxLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(ButtonGroup10->layout());
        if (boxlayout1)
            boxlayout1->addLayout(vboxLayout1);
        vboxLayout1->setAlignment(Qt::AlignTop);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_disconnectExec = new QCheckBox(ButtonGroup10);
        ui_disconnectExec->setObjectName(QString::fromUtf8("ui_disconnectExec"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_disconnectExec->sizePolicy().hasHeightForWidth());
        ui_disconnectExec->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(ui_disconnectExec);

        Spacer1_9_2_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Spacer1_9_2_2);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_commandExec = new QLineEdit(ButtonGroup10);
        ui_commandExec->setObjectName(QString::fromUtf8("ui_commandExec"));

        hboxLayout1->addWidget(ui_commandExec);

        ui_browseExec = new QPushButton(ButtonGroup10);
        ui_browseExec->setObjectName(QString::fromUtf8("ui_browseExec"));
        ui_browseExec->setMinimumSize(QSize(24, 24));
        ui_browseExec->setIcon(qt_get_icon(image0_ID));
        ui_browseExec->setAutoDefault(false);

        hboxLayout1->addWidget(ui_browseExec);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addWidget(ButtonGroup10);

        Spacer1_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer1_8);

        QWidget::setTabOrder(ui_executeCommand, ui_execRaising);
        QWidget::setTabOrder(ui_execRaising, ui_execRaisingThreshold);
        QWidget::setTabOrder(ui_execRaisingThreshold, ui_execFalling);
        QWidget::setTabOrder(ui_execFalling, ui_execFallingThreshold);
        QWidget::setTabOrder(ui_execFallingThreshold, ui_disconnectExec);
        QWidget::setTabOrder(ui_disconnectExec, ui_commandExec);
        QWidget::setTabOrder(ui_commandExec, ui_browseExec);

        retranslateUi(UIExecutePrefs);
        QObject::connect(ui_executeCommand, SIGNAL(toggled(bool)), ButtonGroup9, SLOT(setEnabled(bool)));
        QObject::connect(ui_executeCommand, SIGNAL(toggled(bool)), ButtonGroup10, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(UIExecutePrefs);
    } // setupUi

    void retranslateUi(PrefWidget *UIExecutePrefs)
    {
        UIExecutePrefs->setCaption(QApplication::translate("UIExecutePrefs", "QFrameForm", 0, QApplication::UnicodeUTF8));
        ui_executeCommand->setText(QApplication::translate("UIExecutePrefs", "Execute external command at given threshold", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_executeCommand->setWhatsThis(QApplication::translate("UIExecutePrefs", "Check this if you want QtDMM to execute an external command when given thresholds are reached (Falling or raising edge).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ButtonGroup9->setTitle(QApplication::translate("UIExecutePrefs", "Threshold", 0, QApplication::UnicodeUTF8));
        TextLabel8_2_2_2->setText(QApplication::translate("UIExecutePrefs", "Threshold:", 0, QApplication::UnicodeUTF8));
        ui_execRaisingThreshold->setText(QApplication::translate("UIExecutePrefs", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_execRaisingThreshold->setWhatsThis(QApplication::translate("UIExecutePrefs", "Threshold for raising edge.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel7_2_2_2->setText(QApplication::translate("UIExecutePrefs", "Threshold:", 0, QApplication::UnicodeUTF8));
        ui_execFallingThreshold->setText(QApplication::translate("UIExecutePrefs", "0.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_execFallingThreshold->setWhatsThis(QApplication::translate("UIExecutePrefs", "Threshold for falling edge.<p>\n"
"You can enter your values with a suffix like m, u, n, p, k, M, G, T<br>Example:<br>\n"
"10k - 10000<br>100m - 0.1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_execRaising->setText(QApplication::translate("UIExecutePrefs", "&Raising edge", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_execRaising->setWhatsThis(QApplication::translate("UIExecutePrefs", "Call command on raising edge.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_execFalling->setText(QApplication::translate("UIExecutePrefs", "&Falling edge", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_execFalling->setWhatsThis(QApplication::translate("UIExecutePrefs", "Call command on falling edge.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ButtonGroup10->setTitle(QApplication::translate("UIExecutePrefs", "Command", 0, QApplication::UnicodeUTF8));
        ui_disconnectExec->setText(QApplication::translate("UIExecutePrefs", "Disconnect before executing command", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_disconnectExec->setWhatsThis(QApplication::translate("UIExecutePrefs", "Check this if you want QtDMM to disconnect (close the serial port) before executing the external command.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        ui_commandExec->setWhatsThis(QApplication::translate("UIExecutePrefs", "Enter here the external command to be executed.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        ui_browseExec->setText(QString());
#ifndef QT_NO_TOOLTIP
        ui_browseExec->setToolTip(QApplication::translate("UIExecutePrefs", "Browse", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_browseExec->setWhatsThis(QApplication::translate("UIExecutePrefs", "Here you can browse your harddisk for the external command (Altenative to directly typing it into the field to the left).", 0, QApplication::UnicodeUTF8));
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
"16 16 7 1",
". c None",
"# c #000000",
"e c #a4a1a4",
"a c #acaaac",
"d c #c5c2c5",
"b c #d5d2d5",
"c c #dedede",
"................",
"................",
"................",
".####...........",
"#abba#######....",
"#bbbbaaaaaaa#...",
"#bb#############",
"#ba#ccccccccccc#",
"#b#cddddededee#.",
"#a#cdddededeee#.",
"##cdddededeee#..",
"##cddededeeee#..",
"#cddededeeee#...",
"#############...",
"................",
"................"};


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
    class UIExecutePrefs: public Ui_UIExecutePrefs {};
} // namespace Ui

QT_END_NAMESPACE

class UIExecutePrefs : public PrefWidget, public Ui::UIExecutePrefs
{
    Q_OBJECT

public:
    UIExecutePrefs(QWidget* parent = 0, const char* name = 0);
    ~UIExecutePrefs();

protected slots:
    virtual void languageChange();

};

#endif // UIEXECUTEPREFS_H
