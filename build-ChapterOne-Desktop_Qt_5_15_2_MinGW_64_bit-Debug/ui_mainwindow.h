/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDateTime;
    QSpacerItem *horizontalSpacer;
    QPushButton *restartButton;
    QPushButton *shutdownButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QHBoxLayout *horizontalLayout_3;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *username;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *password;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralWidget\n"
"{\n"
"background: rgba(32, 80, 96, 100);\n"
"border-image: url(:/images/pexels-johannes-plenio-1103970.jpg);\n"
"}\n"
"#topPanel\n"
"{\n"
"background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0,\n"
"stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96,\n"
"100));\n"
"border-radius: 2px;\n"
"}\n"
"#loginForm\n"
"{\n"
"background: rgba(0, 0, 0, 80);\n"
"border-radius: 8px;\n"
"}\n"
"QLabel { color: white; }\n"
"QLineEdit { border-radius: 3px; }\n"
"QPushButton\n"
"{\n"
"color: white;\n"
"background-color: #27a9e3;\n"
"border-width: 0px;\n"
"border-radius: 3px;\n"
"}\n"
"QPushButton:hover { background-color: #66c011; }\n"
"QPushButton:hover#restartButton { background-color: #ffff00; }\n"
"QPushButton:hover#shutdownButton { background-color: #ff0000; }\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(centralWidget);
        topPanel->setObjectName(QString::fromUtf8("topPanel"));
        topPanel->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(topPanel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 1, 1, 1);
        currentDateTime = new QLabel(topPanel);
        currentDateTime->setObjectName(QString::fromUtf8("currentDateTime"));

        horizontalLayout->addWidget(currentDateTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        restartButton = new QPushButton(topPanel);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy);
        restartButton->setMinimumSize(QSize(55, 55));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/Everaldo-Crystal-Clear-App-Quick-restart.ico"), QSize(), QIcon::Normal, QIcon::Off);
        restartButton->setIcon(icon);
        restartButton->setIconSize(QSize(55, 55));

        horizontalLayout->addWidget(restartButton);

        shutdownButton = new QPushButton(topPanel);
        shutdownButton->setObjectName(QString::fromUtf8("shutdownButton"));
        sizePolicy.setHeightForWidth(shutdownButton->sizePolicy().hasHeightForWidth());
        shutdownButton->setSizePolicy(sizePolicy);
        shutdownButton->setMinimumSize(QSize(55, 55));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/Kyo-Tux-Aeon-Sign-Shutdown.ico"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton->setIcon(icon1);
        shutdownButton->setIconSize(QSize(55, 55));

        horizontalLayout->addWidget(shutdownButton);


        verticalLayout->addWidget(topPanel);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        logo = new QLabel(centralWidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(150, 150));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/images/Lboi-Tweetscotty-Twitter-moon.ico);"));

        horizontalLayout_2->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        loginForm = new QWidget(centralWidget);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(350, 220));
        loginForm->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(35, 35, 35, 35);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        username = new QLabel(loginForm);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(0, 25));

        horizontalLayout_5->addWidget(username);

        lineEdit = new QLineEdit(loginForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        password = new QLabel(loginForm);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(password);

        lineEdit_2 = new QLineEdit(loginForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(loginButton);


        horizontalLayout_3->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        currentDateTime->setText(QCoreApplication::translate("MainWindow", "Monday, 25-10-2015 3:14 PM", nullptr));
        restartButton->setText(QString());
        shutdownButton->setText(QString());
        logo->setText(QString());
        username->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
