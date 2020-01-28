#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
    calculateRoom();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculateRoom()
{
    double subTotal = 0;
    if (ui->StandardQueen->isChecked()){
        subTotal = 284;
        ui->adultSpinBox->setMaximum(4);
    }
    if (ui->StandardKing->isChecked()){
        subTotal = 290;
        ui->adultSpinBox->setMaximum(3);
    }
    if (ui->AtriumQueen->isChecked()){
        subTotal = 325;
        ui->adultSpinBox->setMaximum(4);
    }
    if (ui->AtriumKing->isChecked()){
        subTotal = 350;
        ui->adultSpinBox->setMaximum(3);
    }
    subTotal *= ui->numberOfDaysSpinBox->value();
    if (ui->vehicleParkingCheckBox->isChecked()){
        subTotal += (12.75 * ui->numberOfDaysSpinBox->value());
    }

void MainWindow::on_nextPageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_nextPageButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_exitButton_clicked()
{
    QApplication::quit();
}
