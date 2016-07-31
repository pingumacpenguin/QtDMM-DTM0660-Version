#ifndef UICONFIGDLG_H
#define UICONFIGDLG_H

#include <qvariant.h>


#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <Qt3Support/Q3WidgetStack>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "Qt3Support/Q3WidgetStack"

QT_BEGIN_NAMESPACE

class Ui_UIConfigDlg
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    Q3ListView *ui_list;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *ui_helpPixmap;
    QLabel *ui_helpText;
    QLabel *TextLabel1;
    Q3WidgetStack *ui_stack;
    QHBoxLayout *hboxLayout2;
    QPushButton *ui_undo;
    QSpacerItem *Spacer45;
    QPushButton *ui_factoryDefaults;
    QFrame *Line7;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *Spacer61;
    QPushButton *ui_apply;
    QPushButton *ui_ok;
    QPushButton *ui_cancel;

    void setupUi(QDialog *UIConfigDlg)
    {
        if (UIConfigDlg->objectName().isEmpty())
            UIConfigDlg->setObjectName(QString::fromUtf8("UIConfigDlg"));
        UIConfigDlg->resize(385, 260);
        UIConfigDlg->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(UIConfigDlg);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(10);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ui_list = new Q3ListView(UIConfigDlg);
        ui_list->addColumn(QApplication::translate("UIConfigDlg", "Column 1", 0, QApplication::UnicodeUTF8));
        ui_list->header()->setClickEnabled(true, ui_list->header()->count() - 1);
        ui_list->header()->setResizeEnabled(true, ui_list->header()->count() - 1);
        ui_list->setObjectName(QString::fromUtf8("ui_list"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_list->sizePolicy().hasHeightForWidth());
        ui_list->setSizePolicy(sizePolicy);
        ui_list->setHScrollBarMode(Q3ScrollView::AlwaysOff);
        ui_list->setAllColumnsShowFocus(true);

        hboxLayout->addWidget(ui_list);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ui_helpPixmap = new QLabel(UIConfigDlg);
        ui_helpPixmap->setObjectName(QString::fromUtf8("ui_helpPixmap"));
        ui_helpPixmap->setAlignment(Qt::AlignTop|Qt::AlignHCenter);
        ui_helpPixmap->setWordWrap(false);

        hboxLayout1->addWidget(ui_helpPixmap);

        ui_helpText = new QLabel(UIConfigDlg);
        ui_helpText->setObjectName(QString::fromUtf8("ui_helpText"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_helpText->sizePolicy().hasHeightForWidth());
        ui_helpText->setSizePolicy(sizePolicy1);
        ui_helpText->setTextFormat(Qt::RichText);
        ui_helpText->setAlignment(Qt::AlignTop|Qt::AlignLeft);
        ui_helpText->setWordWrap(true);

        hboxLayout1->addWidget(ui_helpText);


        vboxLayout1->addLayout(hboxLayout1);

        TextLabel1 = new QLabel(UIConfigDlg);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setMinimumSize(QSize(0, 5));
        TextLabel1->setMaximumSize(QSize(32767, 5));
        TextLabel1->setWordWrap(false);

        vboxLayout1->addWidget(TextLabel1);

        ui_stack = new Q3WidgetStack(UIConfigDlg);
        ui_stack->setObjectName(QString::fromUtf8("ui_stack"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ui_stack->sizePolicy().hasHeightForWidth());
        ui_stack->setSizePolicy(sizePolicy2);

        vboxLayout1->addWidget(ui_stack);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ui_undo = new QPushButton(UIConfigDlg);
        ui_undo->setObjectName(QString::fromUtf8("ui_undo"));
        ui_undo->setAutoDefault(false);

        hboxLayout2->addWidget(ui_undo);

        Spacer45 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer45);

        ui_factoryDefaults = new QPushButton(UIConfigDlg);
        ui_factoryDefaults->setObjectName(QString::fromUtf8("ui_factoryDefaults"));
        ui_factoryDefaults->setAutoDefault(false);

        hboxLayout2->addWidget(ui_factoryDefaults);


        vboxLayout1->addLayout(hboxLayout2);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);

        Line7 = new QFrame(UIConfigDlg);
        Line7->setObjectName(QString::fromUtf8("Line7"));
        Line7->setFrameShape(QFrame::HLine);
        Line7->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(Line7);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        Spacer61 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(Spacer61);

        ui_apply = new QPushButton(UIConfigDlg);
        ui_apply->setObjectName(QString::fromUtf8("ui_apply"));
        ui_apply->setMinimumSize(QSize(0, 0));
        ui_apply->setMaximumSize(QSize(32767, 32767));

        hboxLayout3->addWidget(ui_apply);

        ui_ok = new QPushButton(UIConfigDlg);
        ui_ok->setObjectName(QString::fromUtf8("ui_ok"));
        ui_ok->setDefault(true);

        hboxLayout3->addWidget(ui_ok);

        ui_cancel = new QPushButton(UIConfigDlg);
        ui_cancel->setObjectName(QString::fromUtf8("ui_cancel"));

        hboxLayout3->addWidget(ui_cancel);


        vboxLayout->addLayout(hboxLayout3);

        QWidget::setTabOrder(ui_list, ui_undo);
        QWidget::setTabOrder(ui_undo, ui_factoryDefaults);
        QWidget::setTabOrder(ui_factoryDefaults, ui_apply);
        QWidget::setTabOrder(ui_apply, ui_ok);
        QWidget::setTabOrder(ui_ok, ui_cancel);

        retranslateUi(UIConfigDlg);

        QMetaObject::connectSlotsByName(UIConfigDlg);
    } // setupUi

    void retranslateUi(QDialog *UIConfigDlg)
    {
        UIConfigDlg->setWindowTitle(QApplication::translate("UIConfigDlg", "QtDMM: Preferences", 0, QApplication::UnicodeUTF8));
        ui_list->header()->setLabel(0, QApplication::translate("UIConfigDlg", "Column 1", 0, QApplication::UnicodeUTF8));
        ui_undo->setText(QApplication::translate("UIConfigDlg", "&Undo", 0, QApplication::UnicodeUTF8));
        ui_factoryDefaults->setText(QApplication::translate("UIConfigDlg", "&Factory defaults", 0, QApplication::UnicodeUTF8));
        ui_apply->setText(QApplication::translate("UIConfigDlg", "&Apply", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        ui_apply->setProperty("whatsThis", QVariant(QApplication::translate("UIConfigDlg", "Click this button so change the color of the data graph in the recorder.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ui_ok->setText(QApplication::translate("UIConfigDlg", "&Ok", 0, QApplication::UnicodeUTF8));
        ui_cancel->setText(QApplication::translate("UIConfigDlg", "&Cancel", 0, QApplication::UnicodeUTF8));
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
    class UIConfigDlg: public Ui_UIConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

class UIConfigDlg : public QDialog, public Ui::UIConfigDlg
{
    Q_OBJECT

public:
    UIConfigDlg(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~UIConfigDlg();

protected slots:
    virtual void languageChange();

};

#endif // UICONFIGDLG_H
