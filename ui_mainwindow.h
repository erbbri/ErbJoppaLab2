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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
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
    QLabel *bannerPage1;
    QLabel *nameLabel;
    QLabel *roomTypeLabel;
    QLabel *dateLabel;
    QLabel *estimatedCostLabel;
    QLabel *numberOfGuestsLabel;
    QLabel *numberOfDaysLabel;
    QLabel *vehicleParkingLabel;
    QGroupBox *reservationGroupBox;
    QRadioButton *StandardQueen;
    QRadioButton *AtriumQueen;
    QRadioButton *StandardKing;
    QRadioButton *AtriumKing;
    QLineEdit *userNameText;
    QDateEdit *dateEdit;
    QSpinBox *adultSpinBox;
    QSpinBox *childrenSpinBox;
    QSpinBox *numberOfDaysSpinBox;
    QCheckBox *vehicleParkingCheckBox;
    QLabel *estimatedCost;
    QFrame *line;
    QWidget *page_2;
    QLabel *bannerPage2;
    QPushButton *nextPageButton_2;
    QLabel *roomTypeLabel2;
    QLabel *taxLabel;
    QLabel *parkingFeeLabel2;
    QLabel *resortFeeLabel3;
    QLabel *totalLabel2;
    QLabel *paymentTypeLabel2;
    QLabel *payLabel2;
    QWidget *page_3;
    QLabel *bannerPage3;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1322, 1152);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 1331, 1091));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 100));"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setAutoFillBackground(false);
        nextPageButton = new QPushButton(page);
        nextPageButton->setObjectName(QString::fromUtf8("nextPageButton"));
        nextPageButton->setGeometry(QRect(1070, 1000, 131, 37));
        QFont font;
        font.setFamily(QString::fromUtf8("Goudy Old Style"));
        font.setBold(true);
        font.setWeight(75);
        nextPageButton->setFont(font);
        nextPageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 63, 63);\n"
"color: rgb(255, 255, 255);"));
        bannerPage1 = new QLabel(page);
        bannerPage1->setObjectName(QString::fromUtf8("bannerPage1"));
        bannerPage1->setGeometry(QRect(0, 0, 1321, 101));
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
        nameLabel->setGeometry(QRect(150, 230, 161, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Goudy Old Style"));
        font2.setPointSize(16);
        nameLabel->setFont(font2);
        nameLabel->setAutoFillBackground(false);
        nameLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        roomTypeLabel = new QLabel(page);
        roomTypeLabel->setObjectName(QString::fromUtf8("roomTypeLabel"));
        roomTypeLabel->setGeometry(QRect(150, 300, 161, 41));
        roomTypeLabel->setFont(font2);
        roomTypeLabel->setAutoFillBackground(false);
        roomTypeLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        dateLabel = new QLabel(page);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(150, 440, 151, 41));
        dateLabel->setFont(font2);
        dateLabel->setAutoFillBackground(false);
        dateLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        estimatedCostLabel = new QLabel(page);
        estimatedCostLabel->setObjectName(QString::fromUtf8("estimatedCostLabel"));
        estimatedCostLabel->setGeometry(QRect(150, 820, 241, 41));
        estimatedCostLabel->setFont(font2);
        estimatedCostLabel->setAutoFillBackground(false);
        estimatedCostLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        numberOfGuestsLabel = new QLabel(page);
        numberOfGuestsLabel->setObjectName(QString::fromUtf8("numberOfGuestsLabel"));
        numberOfGuestsLabel->setGeometry(QRect(150, 580, 241, 41));
        numberOfGuestsLabel->setFont(font2);
        numberOfGuestsLabel->setAutoFillBackground(false);
        numberOfGuestsLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        numberOfDaysLabel = new QLabel(page);
        numberOfDaysLabel->setObjectName(QString::fromUtf8("numberOfDaysLabel"));
        numberOfDaysLabel->setGeometry(QRect(150, 510, 231, 41));
        numberOfDaysLabel->setFont(font2);
        numberOfDaysLabel->setAutoFillBackground(false);
        numberOfDaysLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        vehicleParkingLabel = new QLabel(page);
        vehicleParkingLabel->setObjectName(QString::fromUtf8("vehicleParkingLabel"));
        vehicleParkingLabel->setGeometry(QRect(150, 660, 211, 41));
        vehicleParkingLabel->setFont(font2);
        vehicleParkingLabel->setAutoFillBackground(false);
        vehicleParkingLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        reservationGroupBox = new QGroupBox(page);
        reservationGroupBox->setObjectName(QString::fromUtf8("reservationGroupBox"));
        reservationGroupBox->setGeometry(QRect(420, 300, 431, 111));
        reservationGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 78);"));
        StandardQueen = new QRadioButton(reservationGroupBox);
        StandardQueen->setObjectName(QString::fromUtf8("StandardQueen"));
        StandardQueen->setGeometry(QRect(10, 20, 211, 32));
        AtriumQueen = new QRadioButton(reservationGroupBox);
        AtriumQueen->setObjectName(QString::fromUtf8("AtriumQueen"));
        AtriumQueen->setGeometry(QRect(220, 20, 201, 32));
        StandardKing = new QRadioButton(reservationGroupBox);
        StandardKing->setObjectName(QString::fromUtf8("StandardKing"));
        StandardKing->setGeometry(QRect(10, 60, 201, 32));
        AtriumKing = new QRadioButton(reservationGroupBox);
        AtriumKing->setObjectName(QString::fromUtf8("AtriumKing"));
        AtriumKing->setGeometry(QRect(220, 60, 201, 32));
        userNameText = new QLineEdit(page);
        userNameText->setObjectName(QString::fromUtf8("userNameText"));
        userNameText->setGeometry(QRect(420, 220, 271, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Goudy Old Style"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        userNameText->setFont(font3);
        userNameText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(420, 440, 145, 36));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 78);"));
        adultSpinBox = new QSpinBox(page);
        adultSpinBox->setObjectName(QString::fromUtf8("adultSpinBox"));
        adultSpinBox->setGeometry(QRect(420, 580, 60, 36));
        adultSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 66, 78);"));
        childrenSpinBox = new QSpinBox(page);
        childrenSpinBox->setObjectName(QString::fromUtf8("childrenSpinBox"));
        childrenSpinBox->setGeometry(QRect(510, 580, 60, 36));
        childrenSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 66, 78);"));
        numberOfDaysSpinBox = new QSpinBox(page);
        numberOfDaysSpinBox->setObjectName(QString::fromUtf8("numberOfDaysSpinBox"));
        numberOfDaysSpinBox->setGeometry(QRect(420, 510, 60, 36));
        numberOfDaysSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 66, 78);"));
        vehicleParkingCheckBox = new QCheckBox(page);
        vehicleParkingCheckBox->setObjectName(QString::fromUtf8("vehicleParkingCheckBox"));
        vehicleParkingCheckBox->setGeometry(QRect(420, 670, 125, 32));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Goudy Old Style"));
        vehicleParkingCheckBox->setFont(font4);
        vehicleParkingCheckBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 66, 78);"));
        estimatedCost = new QLabel(page);
        estimatedCost->setObjectName(QString::fromUtf8("estimatedCost"));
        estimatedCost->setGeometry(QRect(429, 830, 211, 31));
        line = new QFrame(page);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 760, 1181, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        bannerPage2 = new QLabel(page_2);
        bannerPage2->setObjectName(QString::fromUtf8("bannerPage2"));
        bannerPage2->setGeometry(QRect(0, 0, 1331, 111));
        bannerPage2->setFont(font1);
        bannerPage2->setLayoutDirection(Qt::LeftToRight);
        bannerPage2->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 15, 8);\n"
"color: rgb(255, 255, 255);"));
        nextPageButton_2 = new QPushButton(page_2);
        nextPageButton_2->setObjectName(QString::fromUtf8("nextPageButton_2"));
        nextPageButton_2->setGeometry(QRect(1080, 1030, 131, 37));
        QFont font7;
        font7.setFamily(QString::fromUtf8("MS Gothic"));
        font7.setBold(true);
        font7.setWeight(75);
        nextPageButton_2->setFont(font7);
        nextPageButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 63, 63);\n"
"color: rgb(255, 255, 255);"));
        roomTypeLabel2 = new QLabel(page_2);
        roomTypeLabel2->setObjectName(QString::fromUtf8("roomTypeLabel2"));
        roomTypeLabel2->setGeometry(QRect(70, 140, 181, 51));
        roomTypeLabel2->setFont(font2);
        roomTypeLabel2->setAutoFillBackground(false);
        roomTypeLabel2->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        taxLabel = new QLabel(page_2);
        taxLabel->setObjectName(QString::fromUtf8("taxLabel"));
        taxLabel->setGeometry(QRect(70, 200, 181, 51));
        taxLabel->setFont(font2);
        taxLabel->setAutoFillBackground(false);
        taxLabel->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        parkingFeeLabel2 = new QLabel(page_2);
        parkingFeeLabel2->setObjectName(QString::fromUtf8("parkingFeeLabel2"));
        parkingFeeLabel2->setGeometry(QRect(70, 260, 181, 51));
        parkingFeeLabel2->setFont(font2);
        parkingFeeLabel2->setAutoFillBackground(false);
        parkingFeeLabel2->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        resortFeeLabel3 = new QLabel(page_2);
        resortFeeLabel3->setObjectName(QString::fromUtf8("resortFeeLabel3"));
        resortFeeLabel3->setGeometry(QRect(70, 320, 181, 51));
        resortFeeLabel3->setFont(font2);
        resortFeeLabel3->setAutoFillBackground(false);
        resortFeeLabel3->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        totalLabel2 = new QLabel(page_2);
        totalLabel2->setObjectName(QString::fromUtf8("totalLabel2"));
        totalLabel2->setGeometry(QRect(70, 380, 181, 51));
        totalLabel2->setFont(font2);
        totalLabel2->setAutoFillBackground(false);
        totalLabel2->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        paymentTypeLabel2 = new QLabel(page_2);
        paymentTypeLabel2->setObjectName(QString::fromUtf8("paymentTypeLabel2"));
        paymentTypeLabel2->setGeometry(QRect(70, 490, 181, 51));
        paymentTypeLabel2->setFont(font2);
        paymentTypeLabel2->setAutoFillBackground(false);
        paymentTypeLabel2->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        payLabel2 = new QLabel(page_2);
        payLabel2->setObjectName(QString::fromUtf8("payLabel2"));
        payLabel2->setGeometry(QRect(70, 550, 181, 51));
        payLabel2->setFont(font2);
        payLabel2->setAutoFillBackground(false);
        payLabel2->setStyleSheet(QString::fromUtf8("color: rgb(193, 141, 36);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        bannerPage3 = new QLabel(page_3);
        bannerPage3->setObjectName(QString::fromUtf8("bannerPage3"));
        bannerPage3->setGeometry(QRect(0, 0, 1331, 101));
        bannerPage3->setFont(font1);
        bannerPage3->setLayoutDirection(Qt::LeftToRight);
        bannerPage3->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 15, 8);\n"
"color: rgb(255, 255, 255);"));
        exitButton = new QPushButton(page_3);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(1080, 1020, 131, 37));
        exitButton->setFont(font7);
        exitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 63, 63);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1322, 29));
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
        bannerPage1->setText(QApplication::translate("MainWindow", "  Reservation Details", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        roomTypeLabel->setText(QApplication::translate("MainWindow", "Room Type:", nullptr));
        dateLabel->setText(QApplication::translate("MainWindow", "Date:", nullptr));
        estimatedCostLabel->setText(QApplication::translate("MainWindow", "Estimated Cost:", nullptr));
        numberOfGuestsLabel->setText(QApplication::translate("MainWindow", "Number of Guests:", nullptr));
        numberOfDaysLabel->setText(QApplication::translate("MainWindow", "Number Of Days:", nullptr));
        vehicleParkingLabel->setText(QApplication::translate("MainWindow", "Vehicle Parking:", nullptr));
        reservationGroupBox->setTitle(QString());
        StandardQueen->setText(QApplication::translate("MainWindow", "Standard 2-Queen", nullptr));
        AtriumQueen->setText(QApplication::translate("MainWindow", "Atrium 2-Queen", nullptr));
        StandardKing->setText(QApplication::translate("MainWindow", "Standard 2-King", nullptr));
        AtriumKing->setText(QApplication::translate("MainWindow", "Atrium 2-King", nullptr));
        userNameText->setText(QApplication::translate("MainWindow", "Enter Name Here", nullptr));
        vehicleParkingCheckBox->setText(QApplication::translate("MainWindow", "Needed", nullptr));
        estimatedCost->setText(QString());
        bannerPage2->setText(QApplication::translate("MainWindow", "  Cost & Payment Information", nullptr));
        nextPageButton_2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        roomTypeLabel2->setText(QApplication::translate("MainWindow", "Room Type:", nullptr));
        taxLabel->setText(QApplication::translate("MainWindow", "Tax:", nullptr));
        parkingFeeLabel2->setText(QApplication::translate("MainWindow", "Parking Fee:", nullptr));
        resortFeeLabel3->setText(QApplication::translate("MainWindow", "Resort Fee:", nullptr));
        totalLabel2->setText(QApplication::translate("MainWindow", "Total:", nullptr));
        paymentTypeLabel2->setText(QApplication::translate("MainWindow", "Payment Type:", nullptr));
        payLabel2->setText(QApplication::translate("MainWindow", "Pay:", nullptr));
        bannerPage3->setText(QApplication::translate("MainWindow", "  Reservation Confirmation", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
