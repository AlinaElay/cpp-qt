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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListWidget *list_widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txt_elem_content;
    QPushButton *btn_edit;
    QLabel *label;
    QFormLayout *formLayout;
    QPushButton *btn_pop_back;
    QPushButton *btn_push_back;
    QPushButton *btn_clear;
    QPushButton *btn_erase;
    QPushButton *btn_insert;
    QLabel *label_4;
    QPushButton *btn_dec;
    QPushButton *btn_inc;
    QPushButton *btn_end;
    QPushButton *btn_begin;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_days_of_week;
    QPushButton *btn_month;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *txt_capacity;
    QPushButton *btn_reserve;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_size;
    QPushButton *btn_resize;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 647);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        list_widget = new QListWidget(centralwidget);
        list_widget->setObjectName("list_widget");

        gridLayout->addWidget(list_widget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        txt_elem_content = new QLineEdit(centralwidget);
        txt_elem_content->setObjectName("txt_elem_content");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txt_elem_content->sizePolicy().hasHeightForWidth());
        txt_elem_content->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(txt_elem_content);

        btn_edit = new QPushButton(centralwidget);
        btn_edit->setObjectName("btn_edit");
        sizePolicy.setHeightForWidth(btn_edit->sizePolicy().hasHeightForWidth());
        btn_edit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(btn_edit);

        horizontalLayout_5->setStretch(0, 4);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::RowWrapPolicy::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        btn_pop_back = new QPushButton(centralwidget);
        btn_pop_back->setObjectName("btn_pop_back");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_pop_back->sizePolicy().hasHeightForWidth());
        btn_pop_back->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, btn_pop_back);

        btn_push_back = new QPushButton(centralwidget);
        btn_push_back->setObjectName("btn_push_back");
        sizePolicy1.setHeightForWidth(btn_push_back->sizePolicy().hasHeightForWidth());
        btn_push_back->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, btn_push_back);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName("btn_clear");
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, btn_clear);

        btn_erase = new QPushButton(centralwidget);
        btn_erase->setObjectName("btn_erase");
        sizePolicy1.setHeightForWidth(btn_erase->sizePolicy().hasHeightForWidth());
        btn_erase->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, btn_erase);

        btn_insert = new QPushButton(centralwidget);
        btn_insert->setObjectName("btn_insert");
        sizePolicy1.setHeightForWidth(btn_insert->sizePolicy().hasHeightForWidth());
        btn_insert->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, btn_insert);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        btn_dec = new QPushButton(centralwidget);
        btn_dec->setObjectName("btn_dec");
        sizePolicy1.setHeightForWidth(btn_dec->sizePolicy().hasHeightForWidth());
        btn_dec->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, btn_dec);

        btn_inc = new QPushButton(centralwidget);
        btn_inc->setObjectName("btn_inc");
        sizePolicy1.setHeightForWidth(btn_inc->sizePolicy().hasHeightForWidth());
        btn_inc->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, btn_inc);

        btn_end = new QPushButton(centralwidget);
        btn_end->setObjectName("btn_end");
        sizePolicy1.setHeightForWidth(btn_end->sizePolicy().hasHeightForWidth());
        btn_end->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, btn_end);

        btn_begin = new QPushButton(centralwidget);
        btn_begin->setObjectName("btn_begin");
        sizePolicy1.setHeightForWidth(btn_begin->sizePolicy().hasHeightForWidth());
        btn_begin->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, btn_begin);


        verticalLayout->addLayout(formLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_days_of_week = new QPushButton(centralwidget);
        btn_days_of_week->setObjectName("btn_days_of_week");
        sizePolicy.setHeightForWidth(btn_days_of_week->sizePolicy().hasHeightForWidth());
        btn_days_of_week->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btn_days_of_week);

        btn_month = new QPushButton(centralwidget);
        btn_month->setObjectName("btn_month");
        sizePolicy.setHeightForWidth(btn_month->sizePolicy().hasHeightForWidth());
        btn_month->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btn_month);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        txt_capacity = new QLineEdit(centralwidget);
        txt_capacity->setObjectName("txt_capacity");

        horizontalLayout_3->addWidget(txt_capacity);

        btn_reserve = new QPushButton(centralwidget);
        btn_reserve->setObjectName("btn_reserve");

        horizontalLayout_3->addWidget(btn_reserve);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_3);

        txt_size = new QLineEdit(centralwidget);
        txt_size->setObjectName("txt_size");
        sizePolicy.setHeightForWidth(txt_size->sizePolicy().hasHeightForWidth());
        txt_size->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(txt_size);

        btn_resize = new QPushButton(centralwidget);
        btn_resize->setObjectName("btn_resize");

        horizontalLayout_2->addWidget(btn_resize);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "std::vector demo", nullptr));
        btn_edit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264\321\213", nullptr));
        btn_pop_back->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        btn_push_back->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        btn_erase->setText(QCoreApplication::translate("MainWindow", "erase", nullptr));
        btn_insert->setText(QCoreApplication::translate("MainWindow", "insert", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\230\321\202\320\265\321\200\320\260\321\202\320\276\321\200", nullptr));
        btn_dec->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        btn_inc->setText(QCoreApplication::translate("MainWindow", "++", nullptr));
        btn_end->setText(QCoreApplication::translate("MainWindow", "end", nullptr));
        btn_begin->setText(QCoreApplication::translate("MainWindow", "begin", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\320\276\321\202\320\276\320\262\320\272\320\270", nullptr));
        btn_days_of_week->setText(QCoreApplication::translate("MainWindow", "= \320\264\320\275\320\270 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        btn_month->setText(QCoreApplication::translate("MainWindow", "= \320\274\320\265\321\201\321\217\321\206\321\213", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "capacity():", nullptr));
        btn_reserve->setText(QCoreApplication::translate("MainWindow", "reserve", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "size():", nullptr));
        btn_resize->setText(QCoreApplication::translate("MainWindow", "resize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
