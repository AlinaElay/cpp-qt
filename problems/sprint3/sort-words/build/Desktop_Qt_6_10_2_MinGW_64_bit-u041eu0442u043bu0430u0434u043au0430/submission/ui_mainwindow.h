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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_asc;
    QRadioButton *rb_desc;
    QCheckBox *cb_case;
    QLineEdit *le_unsorted;
    QLineEdit *le_sorted;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(473, 175);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        rb_asc = new QRadioButton(groupBox);
        rb_asc->setObjectName("rb_asc");
        rb_asc->setChecked(true);

        horizontalLayout->addWidget(rb_asc);

        rb_desc = new QRadioButton(groupBox);
        rb_desc->setObjectName("rb_desc");
        rb_desc->setChecked(false);

        horizontalLayout->addWidget(rb_desc);


        verticalLayout->addWidget(groupBox);

        cb_case = new QCheckBox(centralwidget);
        cb_case->setObjectName("cb_case");

        verticalLayout->addWidget(cb_case);

        le_unsorted = new QLineEdit(centralwidget);
        le_unsorted->setObjectName("le_unsorted");

        verticalLayout->addWidget(le_unsorted);

        le_sorted = new QLineEdit(centralwidget);
        le_sorted->setObjectName("le_sorted");

        verticalLayout->addWidget(le_sorted);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\243\320\275\320\270\320\262\320\265\321\200\321\201\320\260\320\273\321\214\320\275\321\213\320\271 \320\272\320\276\320\274\320\277\320\260\321\200\320\260\321\202\320\276\321\200", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        rb_asc->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        rb_desc->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));
        cb_case->setText(QCoreApplication::translate("MainWindow", "\320\241 \321\203\321\207\321\221\321\202\320\276\320\274 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
