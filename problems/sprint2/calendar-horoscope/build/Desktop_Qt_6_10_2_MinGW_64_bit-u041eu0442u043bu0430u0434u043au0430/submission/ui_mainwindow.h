/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_year;
    QGroupBox *gb_calendar;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rb_eastern;
    QRadioButton *rb_tibetan;
    QRadioButton *rb_zoroastrian;
    QCheckBox *cb_is_date;
    QGroupBox *gb_horoscope;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rb_zodiac;
    QRadioButton *rb_druid;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *sb_day;
    QLabel *label_3;
    QComboBox *cb_month;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLabel *lbl_calendar;
    QLabel *lbl_horoscope;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(577, 384);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        le_year = new QLineEdit(centralwidget);
        le_year->setObjectName("le_year");

        horizontalLayout->addWidget(le_year);


        verticalLayout->addLayout(horizontalLayout);

        gb_calendar = new QGroupBox(centralwidget);
        gb_calendar->setObjectName("gb_calendar");
        horizontalLayout_2 = new QHBoxLayout(gb_calendar);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rb_eastern = new QRadioButton(gb_calendar);
        rb_eastern->setObjectName("rb_eastern");
        rb_eastern->setChecked(true);

        horizontalLayout_2->addWidget(rb_eastern);

        rb_tibetan = new QRadioButton(gb_calendar);
        rb_tibetan->setObjectName("rb_tibetan");

        horizontalLayout_2->addWidget(rb_tibetan);

        rb_zoroastrian = new QRadioButton(gb_calendar);
        rb_zoroastrian->setObjectName("rb_zoroastrian");

        horizontalLayout_2->addWidget(rb_zoroastrian);


        verticalLayout->addWidget(gb_calendar);

        cb_is_date = new QCheckBox(centralwidget);
        cb_is_date->setObjectName("cb_is_date");
        cb_is_date->setCheckable(true);
        cb_is_date->setChecked(false);

        verticalLayout->addWidget(cb_is_date);

        gb_horoscope = new QGroupBox(centralwidget);
        gb_horoscope->setObjectName("gb_horoscope");
        gb_horoscope->setCheckable(false);
        gb_horoscope->setChecked(false);
        horizontalLayout_3 = new QHBoxLayout(gb_horoscope);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        rb_zodiac = new QRadioButton(gb_horoscope);
        rb_zodiac->setObjectName("rb_zodiac");
        rb_zodiac->setChecked(true);

        horizontalLayout_3->addWidget(rb_zodiac);

        rb_druid = new QRadioButton(gb_horoscope);
        rb_druid->setObjectName("rb_druid");

        horizontalLayout_3->addWidget(rb_druid);


        verticalLayout->addWidget(gb_horoscope);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        sb_day = new QSpinBox(centralwidget);
        sb_day->setObjectName("sb_day");
        sb_day->setMinimum(1);
        sb_day->setMaximum(31);

        horizontalLayout_4->addWidget(sb_day);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        cb_month = new QComboBox(centralwidget);
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->addItem(QString());
        cb_month->setObjectName("cb_month");

        horizontalLayout_4->addWidget(cb_month);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setUnderline(true);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        lbl_calendar = new QLabel(centralwidget);
        lbl_calendar->setObjectName("lbl_calendar");

        verticalLayout->addWidget(lbl_calendar);

        lbl_horoscope = new QLabel(centralwidget);
        lbl_horoscope->setObjectName("lbl_horoscope");

        verticalLayout->addWidget(lbl_horoscope);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\320\270 \320\270 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264", nullptr));
        gb_calendar->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        rb_eastern->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\202\320\276\321\207\320\275\321\213\320\271", nullptr));
        rb_tibetan->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\261\320\265\321\202\321\201\320\272\320\270\320\271", nullptr));
        rb_zoroastrian->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\321\200\320\276\320\260\321\201\321\202\321\200\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        cb_is_date->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\321\202\321\213", nullptr));
        gb_horoscope->setTitle(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\321\201\320\272\320\276\320\277", nullptr));
        rb_zodiac->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\264\320\270\320\260\320\272\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        rb_druid->setText(QCoreApplication::translate("MainWindow", "\320\224\321\200\321\203\320\270\320\264\320\276\320\262", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        cb_month->setItemText(0, QCoreApplication::translate("MainWindow", "\321\217\320\275\320\262\320\260\321\200\321\214", nullptr));
        cb_month->setItemText(1, QCoreApplication::translate("MainWindow", "\321\204\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        cb_month->setItemText(2, QCoreApplication::translate("MainWindow", "\320\274\320\260\321\200\321\202", nullptr));
        cb_month->setItemText(3, QCoreApplication::translate("MainWindow", "\320\260\320\277\321\200\320\265\320\273\321\214", nullptr));
        cb_month->setItemText(4, QCoreApplication::translate("MainWindow", "\320\274\320\260\320\271", nullptr));
        cb_month->setItemText(5, QCoreApplication::translate("MainWindow", "\320\270\321\216\320\275\321\214", nullptr));
        cb_month->setItemText(6, QCoreApplication::translate("MainWindow", "\320\270\321\216\320\273\321\214", nullptr));
        cb_month->setItemText(7, QCoreApplication::translate("MainWindow", "\320\260\320\262\320\263\321\203\321\201\321\202", nullptr));
        cb_month->setItemText(8, QCoreApplication::translate("MainWindow", "\321\201\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        cb_month->setItemText(9, QCoreApplication::translate("MainWindow", "\320\276\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        cb_month->setItemText(10, QCoreApplication::translate("MainWindow", "\320\275\320\276\321\217\320\261\321\200\321\214", nullptr));
        cb_month->setItemText(11, QCoreApplication::translate("MainWindow", "\320\264\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210 \320\274\320\260\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\263\320\276\321\200\320\276\321\201\320\272\320\276\320\277:", nullptr));
        lbl_calendar->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\263\320\276\320\264", nullptr));
        lbl_horoscope->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\321\202\321\213 \320\276\321\202\320\272\320\273\321\216\321\207\321\221\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
