#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_nextPageButton_clicked();

    void on_nextPageButton_2_clicked();

    void on_exitButton_clicked();

    void on_StandardQueen_clicked();

    void on_StandardKing_clicked();

    void on_AtriumQueen_clicked();

    void on_AtriumKing_clicked();

    void on_vehicleParkingCheckBox_stateChanged(int arg1);

    void on_numberOfDaysSpinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    void calculateRoom();
};
#endif // MAINWINDOW_H
