#ifndef UIPRINTDLG_H
#define UIPRINTDLG_H

#include <qvariant.h>


#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3MultiLineEdit>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UIPrintDlg
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel3;
    QLabel *printerLabel;
    QPushButton *configBut;
    Q3Frame *Frame5;
    QVBoxLayout *vboxLayout1;
    QLabel *TextLabel1;
    QLineEdit *printTitle;
    QLabel *TextLabel2;
    Q3MultiLineEdit *printComment;
    QHBoxLayout *hboxLayout1;
    QPushButton *helpBut;
    QSpacerItem *Spacer2;
    QPushButton *printBut;
    QPushButton *cancelBut;

    void setupUi(QDialog *UIPrintDlg)
    {
        if (UIPrintDlg->objectName().isEmpty())
            UIPrintDlg->setObjectName(QString::fromUtf8("UIPrintDlg"));
        UIPrintDlg->resize(531, 311);
        UIPrintDlg->setWindowIcon(qt_get_icon(image0_ID));
        UIPrintDlg->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(UIPrintDlg);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        TextLabel3 = new QLabel(UIPrintDlg);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel3->sizePolicy().hasHeightForWidth());
        TextLabel3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        TextLabel3->setFont(font);
        TextLabel3->setWordWrap(false);

        hboxLayout->addWidget(TextLabel3);

        printerLabel = new QLabel(UIPrintDlg);
        printerLabel->setObjectName(QString::fromUtf8("printerLabel"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(printerLabel->sizePolicy().hasHeightForWidth());
        printerLabel->setSizePolicy(sizePolicy1);
        printerLabel->setFrameShape(QFrame::NoFrame);
        printerLabel->setFrameShadow(QFrame::Sunken);
        printerLabel->setMargin(0);
        printerLabel->setIndent(8);
        printerLabel->setWordWrap(false);

        hboxLayout->addWidget(printerLabel);

        configBut = new QPushButton(UIPrintDlg);
        configBut->setObjectName(QString::fromUtf8("configBut"));
        configBut->setAutoDefault(false);

        hboxLayout->addWidget(configBut);


        vboxLayout->addLayout(hboxLayout);

        Frame5 = new Q3Frame(UIPrintDlg);
        Frame5->setObjectName(QString::fromUtf8("Frame5"));
        Frame5->setFrameShape(QFrame::WinPanel);
        Frame5->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(Frame5);
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(10, 10, 10, 10);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        TextLabel1 = new QLabel(Frame5);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setWordWrap(false);

        vboxLayout1->addWidget(TextLabel1);

        printTitle = new QLineEdit(Frame5);
        printTitle->setObjectName(QString::fromUtf8("printTitle"));
        printTitle->setFrame(true);

        vboxLayout1->addWidget(printTitle);

        TextLabel2 = new QLabel(Frame5);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setWordWrap(false);

        vboxLayout1->addWidget(TextLabel2);

        printComment = new Q3MultiLineEdit(Frame5);
        printComment->setObjectName(QString::fromUtf8("printComment"));
        printComment->setFrameShape(Q3MultiLineEdit::WinPanel);
        printComment->setFrameShadow(Q3MultiLineEdit::Sunken);
        printComment->setLineWidth(1);
        printComment->setWordWrap(Q3MultiLineEdit::WidgetWidth);

        vboxLayout1->addWidget(printComment);


        vboxLayout->addWidget(Frame5);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(4);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        helpBut = new QPushButton(UIPrintDlg);
        helpBut->setObjectName(QString::fromUtf8("helpBut"));
        helpBut->setMinimumSize(QSize(26, 26));
        helpBut->setIcon(qt_get_icon(image1_ID));
        helpBut->setAutoDefault(false);

        hboxLayout1->addWidget(helpBut);

        Spacer2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Spacer2);

        printBut = new QPushButton(UIPrintDlg);
        printBut->setObjectName(QString::fromUtf8("printBut"));
        printBut->setEnabled(false);
        printBut->setDefault(true);

        hboxLayout1->addWidget(printBut);

        cancelBut = new QPushButton(UIPrintDlg);
        cancelBut->setObjectName(QString::fromUtf8("cancelBut"));

        hboxLayout1->addWidget(cancelBut);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(UIPrintDlg);
        QObject::connect(printBut, SIGNAL(clicked()), UIPrintDlg, SLOT(accept()));
        QObject::connect(cancelBut, SIGNAL(clicked()), UIPrintDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(UIPrintDlg);
    } // setupUi

    void retranslateUi(QDialog *UIPrintDlg)
    {
        UIPrintDlg->setWindowTitle(QApplication::translate("UIPrintDlg", "QtDMM: Print graph ...", 0, QApplication::UnicodeUTF8));
        UIPrintDlg->setWindowIconText(QApplication::translate("UIPrintDlg", "Print ...", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("UIPrintDlg", "Printer:", 0, QApplication::UnicodeUTF8));
        printerLabel->setText(QApplication::translate("UIPrintDlg", "Please select printer ->", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        printerLabel->setWhatsThis(QApplication::translate("UIPrintDlg", "This label shows the currently selected printer. Click the button to the right to configure the printer. <i>(You have to select a printer in order to be able to print)</i>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        configBut->setText(QApplication::translate("UIPrintDlg", "Configure ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        configBut->setWhatsThis(QApplication::translate("UIPrintDlg", "Click here to configure the printer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel1->setText(QApplication::translate("UIPrintDlg", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        printTitle->setWhatsThis(QApplication::translate("UIPrintDlg", "Enter a title for the document <i>(Optional)</i>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        TextLabel2->setText(QApplication::translate("UIPrintDlg", "Comment", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        printComment->setWhatsThis(QApplication::translate("UIPrintDlg", "Here you may enter an comment which will be printed on top of the page <i>(Optional)</i>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        helpBut->setText(QString());
#ifndef QT_NO_TOOLTIP
        helpBut->setToolTip(QApplication::translate("UIPrintDlg", "Direct help (SHIFT+F1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        printBut->setText(QApplication::translate("UIPrintDlg", "&Print", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        printBut->setWhatsThis(QApplication::translate("UIPrintDlg", "Click here to print.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cancelBut->setText(QApplication::translate("UIPrintDlg", "&Cancel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        cancelBut->setWhatsThis(QApplication::translate("UIPrintDlg", "Click here to abort printing.", 0, QApplication::UnicodeUTF8));
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
"c c #393939",
"b c #5a5a5a",
"a c #7b7b7b",
"e c #949494",
"j c #c5c5c5",
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
"22 22 4 1",
". c None",
"# c #000000",
"a c #000083",
"b c #4a4a4a",
"......................",
"......................",
"......................",
"...#........aaaaa.....",
"...##......aaabaaa....",
"...###....aaabb.aaa...",
"...####...aabb...aab..",
"...#####..aab....aab..",
"...######..ab...aaab..",
"...#######..b..aaabb..",
"...########...aaabb...",
"...#########.aaabb....",
"...#####bbbbbaaab.....",
"...##b###.....bbb.....",
"...#bb###b...aaa......",
"....b..###...aaab.....",
".......###b...bbb.....",
"........###...........",
"........###b..........",
".........bbb..........",
"......................",
"......................"};


    switch (id) {
        case image0_ID: return QPixmap((const char**)image0_data);
        case image1_ID: return QPixmap((const char**)image1_data);
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class UIPrintDlg: public Ui_UIPrintDlg {};
} // namespace Ui

QT_END_NAMESPACE

class UIPrintDlg : public QDialog, public Ui::UIPrintDlg
{
    Q_OBJECT

public:
    UIPrintDlg(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~UIPrintDlg();

protected slots:
    virtual void languageChange();

};

#endif // UIPRINTDLG_H
