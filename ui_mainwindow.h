/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *nextPageButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox;
    QLabel *bannerPage1;
    QLabel *nameLabel;
    QLabel *roomTypeLabel;
    QLabel *dateLabel;
    QLabel *estimatedCostLabel;
    QLabel *numberOfGuestsLabel;
    QLabel *numberOfDaysLabel;
    QLabel *vehicleParkingLabel;
    QWidget *page_2;
    QLabel *bannerPage2;
    QPushButton *nextPageButton_2;
    QWidget *page_3;
    QLabel *bannerPage3;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1242, 1142);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 1241, 1111));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 100));"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setAutoFillBackground(false);
        nextPageButton = new QPushButton(page);
        nextPageButton->setObjectName(QString::fromUtf8("nextPageButton"));
        nextPageButton->setGeometry(QRect(1070, 1000, 131, 37));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Gothic"));
        font.setBold(true);
        font.setWeight(75);
        nextPageButton->setFont(font);
        nextPageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 63, 63);\n"
"color: rgb(255, 255, 255);"));
        radioButton = new QRadioButton(page);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(900, 520, 149, 32));
        radioButton->setAutoFillBackground(false);
        radioButton_2 = new QRadioButton(page);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(900, 580, 149, 32));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(920, 390, 123, 80));
        bannerPage1 = new QLabel(page);
        bannerPage1->setObjectName(QString::fromUtf8("bannerPage1"));
        bannerPage1->setGeometry(QRect(0, 0, 1241, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Goudy Old Style"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        bannerPage1->setFont(font1);
        bannerPage1->setLayoutDirection(Qt::LeftToRight);
        bannerPage1->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 15, 8);\n"
"color: rgb(255, 255, 255);"));
        nameLabel = new QLabel(page);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(160, 340, 161, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Goudy Old Style"));
        font2.setPointSize(16);
        nameLabel->setFont(font2);
        nameLabel->setAutoFillBackground(true);
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        roomTypeLabel = new QLabel(page);
        roomTypeLabel->setObjectName(QString::fromUtf8("roomTypeLabel"));
        roomTypeLabel->setGeometry(QRect(160, 420, 161, 41));
        roomTypeLabel->setFont(font2);
        roomTypeLabel->setAutoFillBackground(false);
        roomTypeLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        dateLabel = new QLabel(page);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(160, 500, 151, 41));
        dateLabel->setFont(font2);
        dateLabel->setAutoFillBackground(false);
        dateLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        estimatedCostLabel = new QLabel(page);
        estimatedCostLabel->setObjectName(QString::fromUtf8("estimatedCostLabel"));
        estimatedCostLabel->setGeometry(QRect(160, 820, 281, 41));
        estimatedCostLabel->setFont(font2);
        estimatedCostLabel->setAutoFillBackground(false);
        estimatedCostLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        numberOfGuestsLabel = new QLabel(page);
        numberOfGuestsLabel->setObjectName(QString::fromUtf8("numberOfGuestsLabel"));
        numberOfGuestsLabel->setGeometry(QRect(160, 670, 241, 41));
        numberOfGuestsLabel->setFont(font2);
        numberOfGuestsLabel->setAutoFillBackground(false);
        numberOfGuestsLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        numberOfDaysLabel = new QLabel(page);
        numberOfDaysLabel->setObjectName(QString::fromUtf8("numberOfDaysLabel"));
        numberOfDaysLabel->setGeometry(QRect(160, 590, 231, 41));
        numberOfDaysLabel->setFont(font2);
        numberOfDaysLabel->setAutoFillBackground(false);
        numberOfDaysLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        vehicleParkingLabel = new QLabel(page);
        vehicleParkingLabel->setObjectName(QString::fromUtf8("vehicleParkingLabel"));
        vehicleParkingLabel->setGeometry(QRect(160, 750, 211, 41));
        vehicleParkingLabel->setFont(font2);
        vehicleParkingLabel->setAutoFillBackground(false);
        vehicleParkingLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        bannerPage2 = new QLabel(page_2);
        bannerPage2->setObjectName(QString::fromUtf8("bannerPage2"));
        bannerPage2->setGeometry(QRect(0, 10, 1241, 101));
        bannerPage2->setFont(font1);
        bannerPage2->setLayoutDirection(Qt::LeftToRight);
        bannerPage2->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 15, 8);\n"
"color: rgb(255, 255, 255);"));
        nextPageButton_2 = new QPushButton(page_2);
        nextPageButton_2->setObjectName(QString::fromUtf8("nextPageButton_2"));
        nextPageButton_2->setGeometry(QRect(1080, 1030, 131, 37));
        nextPageButton_2->setFont(font);
        nextPageButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 63, 63);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        bannerPage3 = new QLabel(page_3);
        bannerPage3->setObjectName(QString::fromUtf8("bannerPage3"));
        bannerPage3->setGeometry(QRect(0, 10, 1241, 101));
        bannerPage3->setFont(font1);
        bannerPage3->setLayoutDirection(Qt::LeftToRight);
        bannerPage3->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 15, 8);\n"
"color: rgb(255, 255, 255);"));
        exitButton = new QPushButton(page_3);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(1080, 1020, 131, 37));
        exitButton->setFont(font);
        exitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 63, 63);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1242, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        nextPageButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        bannerPage1->setText(QApplication::translate("MainWindow", "  Reservation Details", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        roomTypeLabel->setText(QApplication::translate("MainWindow", "Room Type:", nullptr));
        dateLabel->setText(QApplication::translate("MainWindow", "Date:", nullptr));
        estimatedCostLabel->setText(QApplication::translate("MainWindow", "Estimated Cost:", nullptr));
        numberOfGuestsLabel->setText(QApplication::translate("MainWindow", "Number of Guests:", nullptr));
        numberOfDaysLabel->setText(QApplication::translate("MainWindow", "Number Of Days:", nullptr));
        vehicleParkingLabel->setText(QApplication::translate("MainWindow", "Vehicle Parking:", nullptr));
        bannerPage2->setText(QApplication::translate("MainWindow", "  Cost & Payment Information", nullptr));
        nextPageButton_2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        bannerPage3->setText(QApplication::translate("MainWindow", "Reservation Confirmation", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
