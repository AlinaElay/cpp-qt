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
    QHBoxLayout *horizontalLayout_3;
    QListWidget *list_widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *txt_elem_content;
    QLabel *label;
    QFormLayout *formLayout;
    QPushButton *btn_pop_back;
    QPushButton *btn_push_back;
    QPushButton *btn_clear;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_days_of_week;
    QPushButton *btn_month;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_size;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 647);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        list_widget = new QListWidget(centralwidget);
        list_widget->setObjectName("list_widget");

        horizontalLayout_3->addWidget(list_widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        txt_elem_content = new QLineEdit(centralwidget);
        txt_elem_content->setObjectName("txt_elem_content");

        verticalLayout->addWidget(txt_elem_content);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::AllNonFixedFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::RowWrapPolicy::DontWrapRows);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        btn_pop_back = new QPushButton(centralwidget);
        btn_pop_back->setObjectName("btn_pop_back");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_pop_back->sizePolicy().hasHeightForWidth());
        btn_pop_back->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, btn_pop_back);

        btn_push_back = new QPushButton(centralwidget);
        btn_push_back->setObjectName("btn_push_back");
        sizePolicy.setHeightForWidth(btn_push_back->sizePolicy().hasHeightForWidth());
        btn_push_back->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, btn_push_back);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName("btn_clear");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, btn_clear);


        verticalLayout->addLayout(formLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_days_of_week = new QPushButton(centralwidget);
        btn_days_of_week->setObjectName("btn_days_of_week");

        horizontalLayout->addWidget(btn_days_of_week);

        btn_month = new QPushButton(centralwidget);
        btn_month->setObjectName("btn_month");

        horizontalLayout->addWidget(btn_month);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        txt_size = new QLineEdit(centralwidget);
        txt_size->setObjectName("txt_size");

        horizontalLayout_2->addWidget(txt_size);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "std::vector demo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264\321\213", nullptr));
        btn_pop_back->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        btn_push_back->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\320\276\321\202\320\276\320\262\320\272\320\270", nullptr));
        btn_days_of_week->setText(QCoreApplication::translate("MainWindow", "= \320\264\320\275\320\270 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        btn_month->setText(QCoreApplication::translate("MainWindow", "= \320\274\320\265\321\201\321\217\321\206\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "size():", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
