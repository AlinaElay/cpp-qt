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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btn_divide;
    QPushButton *btn_zero;
    QPushButton *btn_equal;
    QPushButton *btn_add;
    QPushButton *btn_power;
    QPushButton *btn_extra;
    QPushButton *btn_five;
    QPushButton *btn_seven;
    QPushButton *btn_negate;
    QPushButton *btn_nine;
    QPushButton *btn_ms;
    QPushButton *btn_c;
    QPushButton *btn_six;
    QPushButton *btn_backspace;
    QPushButton *btn_mr;
    QPushButton *btn_three;
    QPushButton *btn_mc;
    QPushButton *btn_multiplicate;
    QPushButton *btn_one;
    QPushButton *btn_four;
    QPushButton *btn_substract;
    QHBoxLayout *horizontalLayout;
    QLabel *l_memory;
    QLabel *l_result;
    QPushButton *btn_eight;
    QPushButton *btn_two;
    QLabel *l_formula;
    QComboBox *cmb_controller;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(470, 437);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(10);
        btn_divide = new QPushButton(centralwidget);
        btn_divide->setObjectName("btn_divide");
        sizePolicy.setHeightForWidth(btn_divide->sizePolicy().hasHeightForWidth());
        btn_divide->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_divide, 4, 4, 1, 1);

        btn_zero = new QPushButton(centralwidget);
        btn_zero->setObjectName("btn_zero");
        sizePolicy.setHeightForWidth(btn_zero->sizePolicy().hasHeightForWidth());
        btn_zero->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_zero, 8, 1, 1, 1);

        btn_equal = new QPushButton(centralwidget);
        btn_equal->setObjectName("btn_equal");
        sizePolicy.setHeightForWidth(btn_equal->sizePolicy().hasHeightForWidth());
        btn_equal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_equal, 8, 4, 1, 1);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_add, 7, 4, 1, 1);

        btn_power = new QPushButton(centralwidget);
        btn_power->setObjectName("btn_power");

        gridLayout->addWidget(btn_power, 3, 4, 1, 1);

        btn_extra = new QPushButton(centralwidget);
        btn_extra->setObjectName("btn_extra");
        sizePolicy.setHeightForWidth(btn_extra->sizePolicy().hasHeightForWidth());
        btn_extra->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_extra, 8, 0, 1, 1);

        btn_five = new QPushButton(centralwidget);
        btn_five->setObjectName("btn_five");
        sizePolicy.setHeightForWidth(btn_five->sizePolicy().hasHeightForWidth());
        btn_five->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_five, 6, 1, 1, 1);

        btn_seven = new QPushButton(centralwidget);
        btn_seven->setObjectName("btn_seven");
        sizePolicy.setHeightForWidth(btn_seven->sizePolicy().hasHeightForWidth());
        btn_seven->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_seven, 5, 0, 1, 1);

        btn_negate = new QPushButton(centralwidget);
        btn_negate->setObjectName("btn_negate");
        sizePolicy.setHeightForWidth(btn_negate->sizePolicy().hasHeightForWidth());
        btn_negate->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_negate, 4, 2, 1, 1);

        btn_nine = new QPushButton(centralwidget);
        btn_nine->setObjectName("btn_nine");
        sizePolicy.setHeightForWidth(btn_nine->sizePolicy().hasHeightForWidth());
        btn_nine->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_nine, 5, 2, 1, 1);

        btn_ms = new QPushButton(centralwidget);
        btn_ms->setObjectName("btn_ms");

        gridLayout->addWidget(btn_ms, 3, 2, 1, 1);

        btn_c = new QPushButton(centralwidget);
        btn_c->setObjectName("btn_c");
        sizePolicy.setHeightForWidth(btn_c->sizePolicy().hasHeightForWidth());
        btn_c->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_c, 4, 0, 1, 2);

        btn_six = new QPushButton(centralwidget);
        btn_six->setObjectName("btn_six");
        sizePolicy.setHeightForWidth(btn_six->sizePolicy().hasHeightForWidth());
        btn_six->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_six, 6, 2, 1, 1);

        btn_backspace = new QPushButton(centralwidget);
        btn_backspace->setObjectName("btn_backspace");
        sizePolicy.setHeightForWidth(btn_backspace->sizePolicy().hasHeightForWidth());
        btn_backspace->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_backspace, 8, 2, 1, 1);

        btn_mr = new QPushButton(centralwidget);
        btn_mr->setObjectName("btn_mr");

        gridLayout->addWidget(btn_mr, 3, 1, 1, 1);

        btn_three = new QPushButton(centralwidget);
        btn_three->setObjectName("btn_three");
        sizePolicy.setHeightForWidth(btn_three->sizePolicy().hasHeightForWidth());
        btn_three->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_three, 7, 2, 1, 1);

        btn_mc = new QPushButton(centralwidget);
        btn_mc->setObjectName("btn_mc");

        gridLayout->addWidget(btn_mc, 3, 0, 1, 1);

        btn_multiplicate = new QPushButton(centralwidget);
        btn_multiplicate->setObjectName("btn_multiplicate");
        sizePolicy.setHeightForWidth(btn_multiplicate->sizePolicy().hasHeightForWidth());
        btn_multiplicate->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_multiplicate, 5, 4, 1, 1);

        btn_one = new QPushButton(centralwidget);
        btn_one->setObjectName("btn_one");
        sizePolicy.setHeightForWidth(btn_one->sizePolicy().hasHeightForWidth());
        btn_one->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_one, 7, 0, 1, 1);

        btn_four = new QPushButton(centralwidget);
        btn_four->setObjectName("btn_four");
        sizePolicy.setHeightForWidth(btn_four->sizePolicy().hasHeightForWidth());
        btn_four->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_four, 6, 0, 1, 1);

        btn_substract = new QPushButton(centralwidget);
        btn_substract->setObjectName("btn_substract");
        sizePolicy.setHeightForWidth(btn_substract->sizePolicy().hasHeightForWidth());
        btn_substract->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_substract, 6, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        l_memory = new QLabel(centralwidget);
        l_memory->setObjectName("l_memory");

        horizontalLayout->addWidget(l_memory);

        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");
        l_result->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(l_result);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 5);

        btn_eight = new QPushButton(centralwidget);
        btn_eight->setObjectName("btn_eight");
        sizePolicy.setHeightForWidth(btn_eight->sizePolicy().hasHeightForWidth());
        btn_eight->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_eight, 5, 1, 1, 1);

        btn_two = new QPushButton(centralwidget);
        btn_two->setObjectName("btn_two");
        sizePolicy.setHeightForWidth(btn_two->sizePolicy().hasHeightForWidth());
        btn_two->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_two, 7, 1, 1, 1);

        l_formula = new QLabel(centralwidget);
        l_formula->setObjectName("l_formula");
        l_formula->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(l_formula, 0, 1, 1, 4);

        cmb_controller = new QComboBox(centralwidget);
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->setObjectName("cmb_controller");

        gridLayout->addWidget(cmb_controller, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        btn_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btn_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_power->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        btn_extra->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_negate->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        btn_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_ms->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        btn_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_backspace->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btn_mr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        btn_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_mc->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        btn_multiplicate->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btn_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_substract->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        l_memory->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        l_result->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        l_formula->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        cmb_controller->setItemText(0, QCoreApplication::translate("MainWindow", "double", nullptr));
        cmb_controller->setItemText(1, QCoreApplication::translate("MainWindow", "float", nullptr));
        cmb_controller->setItemText(2, QCoreApplication::translate("MainWindow", "uint8_t", nullptr));
        cmb_controller->setItemText(3, QCoreApplication::translate("MainWindow", "int", nullptr));
        cmb_controller->setItemText(4, QCoreApplication::translate("MainWindow", "int64_t", nullptr));
        cmb_controller->setItemText(5, QCoreApplication::translate("MainWindow", "size_t", nullptr));
        cmb_controller->setItemText(6, QCoreApplication::translate("MainWindow", "Rational", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
