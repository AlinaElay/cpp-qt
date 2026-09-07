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
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_up_windows;
    QAction *action_use_resources;
    QAction *action_choose_dir;
    QAction *action_5;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_left;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_right;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(576, 269);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 217));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        MainWindow->setPalette(palette);
        action_up_windows = new QAction(MainWindow);
        action_up_windows->setObjectName("action_up_windows");
        action_up_windows->setCheckable(true);
        action_up_windows->setChecked(true);
        action_use_resources = new QAction(MainWindow);
        action_use_resources->setObjectName("action_use_resources");
        action_choose_dir = new QAction(MainWindow);
        action_choose_dir->setObjectName("action_choose_dir");
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_left = new QPushButton(centralwidget);
        btn_left->setObjectName("btn_left");
        btn_left->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/images/chevron_l.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_left->setIcon(icon);
        btn_left->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btn_left);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_right = new QPushButton(centralwidget);
        btn_right->setObjectName("btn_right");
        btn_right->setStyleSheet(QString::fromUtf8("border:none"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/images/chevron_r.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_right->setIcon(icon1);
        btn_right->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btn_right);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 576, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_up_windows);
        menu->addAction(action_use_resources);
        menu->addAction(action_choose_dir);
        menu->addSeparator();
        menu->addAction(action_5);

        retranslateUi(MainWindow);
        QObject::connect(action_5, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\210\320\260\321\207\320\270\320\271 \321\204\320\276\321\202\320\276\320\260\320\273\321\214\320\261\320\276\320\274", nullptr));
        action_up_windows->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\321\205 \320\262\321\201\320\265\321\205 \320\276\320\272\320\276\320\275", nullptr));
        action_use_resources->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 \321\200\320\265\321\201\321\203\321\200\321\201\320\260", nullptr));
        action_choose_dir->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276 \320\270\320\267 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \320\277\320\260\320\277\320\272\320\270", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        btn_left->setText(QString());
        btn_right->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
