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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_question;
    QLineEdit *le_input;
    QPushButton *btn_input;
    QLabel *lbl_result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(320, 240);
        MainWindow->setMinimumSize(QSize(320, 240));
        MainWindow->setMaximumSize(QSize(320, 240));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 20, 211, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_question = new QLabel(widget);
        lbl_question->setObjectName("lbl_question");
        lbl_question->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lbl_question);

        le_input = new QLineEdit(widget);
        le_input->setObjectName("le_input");

        verticalLayout->addWidget(le_input);

        btn_input = new QPushButton(widget);
        btn_input->setObjectName("btn_input");

        verticalLayout->addWidget(btn_input);

        lbl_result = new QLabel(widget);
        lbl_result->setObjectName("lbl_result");
        lbl_result->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lbl_result);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 320, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hello Button", nullptr));
        lbl_question->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\272 \320\262\320\260\321\201 \320\267\320\276\320\262\321\203\321\202?", nullptr));
        btn_input->setText(QCoreApplication::translate("MainWindow", "Hello", nullptr));
        lbl_result->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
