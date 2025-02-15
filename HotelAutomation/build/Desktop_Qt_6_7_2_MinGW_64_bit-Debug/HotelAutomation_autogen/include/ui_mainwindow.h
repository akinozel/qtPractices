/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vertl;
    QPushButton *CheckInButton;
    QPushButton *CheckOutButton;
    QPushButton *pushButtonExtra;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(998, 544);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Sade ve G\303\266z Yormayan Yaz Temal\304\261 Arkaplan */\n"
"QWidget {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #BBDEFB,  /* A\303\247\304\261k Mavi */\n"
"                                stop: 1 #E3F2FD); /* Neredeyse Beyaz */\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 100, 511, 391));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("/* Pastel Bahar Temas\304\261 */\n"
"QPushButton {\n"
"    background-color: qradialgradient(cx: 0.5, cy: 0.5, radius: 1.0, fx: 0.5, fy: 0.5,\n"
"                                      stop: 0 #ffeaa7, stop: 1 #fab1a0);\n"
"    border: 2px solid #fab1a0;\n"
"    border-radius: 15px;\n"
"    color: #2d3436;\n"
"    padding: 12px 24px;\n"
"    font: bold 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx: 0.5, cy: 0.5, radius: 1.0, fx: 0.5, fy: 0.5,\n"
"                                      stop: 0 #fff3b0, stop: 1 #f8c291);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx: 0.5, cy: 0.5, radius: 1.0, fx: 0.5, fy: 0.5,\n"
"                                      stop: 0 #ffe6a7, stop: 1 #f8b195);\n"
"}\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/otel.webp")));
        label->setScaledContents(true);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 100, 451, 391));
        vertl = new QVBoxLayout(verticalLayoutWidget);
        vertl->setObjectName("vertl");
        vertl->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        vertl->setContentsMargins(0, 0, 0, 0);
        CheckInButton = new QPushButton(verticalLayoutWidget);
        CheckInButton->setObjectName("CheckInButton");
        sizePolicy.setHeightForWidth(CheckInButton->sizePolicy().hasHeightForWidth());
        CheckInButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        CheckInButton->setFont(font);
        CheckInButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0,\n"
"                                      stop: 0 #1abc9c, stop: 1 #e67e22);\n"
"    border: 2px solid #ffffff;\n"
"    border-radius: 12px;\n"
"    color: #ffffff;\n"
"    padding: 10px 20px;\n"
"    font: bold 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0,\n"
"                                      stop: 0 #16a085, stop: 1 #d35400);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0,\n"
"                                      stop: 0 #149174, stop: 1 #c0392b);\n"
"}\n"
""));

        vertl->addWidget(CheckInButton);

        CheckOutButton = new QPushButton(verticalLayoutWidget);
        CheckOutButton->setObjectName("CheckOutButton");
        sizePolicy.setHeightForWidth(CheckOutButton->sizePolicy().hasHeightForWidth());
        CheckOutButton->setSizePolicy(sizePolicy);
        CheckOutButton->setFont(font);
        CheckOutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f39c12, stop: 1 #f1c40f);\n"
"    border: 2px solid #ffffff;\n"
"    border-radius: 10px;\n"
"    color: #ffffff;\n"
"    padding: 12px 24px;\n"
"    font: bold 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #e67e22, stop: 1 #f39c12);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d35400, stop: 1 #e67e22);\n"
"}"));

        vertl->addWidget(CheckOutButton);

        pushButtonExtra = new QPushButton(verticalLayoutWidget);
        pushButtonExtra->setObjectName("pushButtonExtra");
        sizePolicy.setHeightForWidth(pushButtonExtra->sizePolicy().hasHeightForWidth());
        pushButtonExtra->setSizePolicy(sizePolicy);
        pushButtonExtra->setFont(font);
        pushButtonExtra->setStyleSheet(QString::fromUtf8("/* Pastel Bahar Temas\304\261 */\n"
"QPushButton {\n"
"    background-color: qradialgradient(cx: 0.5, cy: 0.5, radius: 1.0, fx: 0.5, fy: 0.5,\n"
"                                      stop: 0 #ffeaa7, stop: 1 #fab1a0);\n"
"    border: 2px solid #fab1a0;\n"
"    border-radius: 15px;\n"
"    color: #2d3436;\n"
"    padding: 12px 24px;\n"
"    font: bold 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qradialgradient(cx: 0.5, cy: 0.5, radius: 1.0, fx: 0.5, fy: 0.5,\n"
"                                      stop: 0 #fff3b0, stop: 1 #f8c291);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qradialgradient(cx: 0.5, cy: 0.5, radius: 1.0, fx: 0.5, fy: 0.5,\n"
"                                      stop: 0 #ffe6a7, stop: 1 #f8b195);\n"
"}\n"
""));

        vertl->addWidget(pushButtonExtra);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 20, 481, 61));
        QFont font1;
        font1.setPointSize(30);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("/* Hotel Management System Label i\303\247in Sade Stil */\n"
"QLabel#hotelLabel {\n"
"    color: #2c3e50;            /* Okunakl\304\261, koyu mavi-siyah ton */\n"
"    background-color: transparent; /* Arka plan \305\237effaf, rahats\304\261z etmesin */\n"
"    font: bold 22px \"Arial\", sans-serif;  /* Net ve modern font */\n"
"    padding: 10px;             /* Yaz\304\261n\304\261n etraf\304\261nda biraz bo\305\237luk */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 998, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        CheckInButton->setText(QCoreApplication::translate("MainWindow", "Check In", nullptr));
        CheckOutButton->setText(QCoreApplication::translate("MainWindow", "Check Out", nullptr));
        pushButtonExtra->setText(QCoreApplication::translate("MainWindow", "Extra", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Hotel Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
