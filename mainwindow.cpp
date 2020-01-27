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
    }
    if (ui->StandardKing->isChecked()){
        subTotal = 290;
    }
    if (ui->AtriumQueen->isChecked()){
        subTotal = 325;
    }
    if (ui->AtriumKing->isChecked()){
        subTotal = 350;
    }
    subTotal *= ui->numberOfDaysSpinBox->value();
    if (ui->vehicleParkingCheckBox->isChecked()){
        subTotal += (12.75 * ui->numberOfDaysSpinBox->value());
    }

    ui->estimatedCost->setText(" $" + QString::number(subTotal));
}
//next page button operations
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
// 1st page UI functionality
void MainWindow::on_StandardQueen_clicked()
{
    calculateRoom();
}

void MainWindow::on_StandardKing_clicked()
{
    calculateRoom();
}

void MainWindow::on_AtriumQueen_clicked()
{
    calculateRoom();
}

void MainWindow::on_AtriumKing_clicked()
{
    calculateRoom();
}

void MainWindow::on_vehicleParkingCheckBox_stateChanged(int arg1)
{
    calculateRoom();
}

void MainWindow::on_numberOfDaysSpinBox_valueChanged(int arg1)
{
    calculateRoom();
}
