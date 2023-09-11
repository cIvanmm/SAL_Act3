#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"neurona.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString id, voltaje, x, y, red, green, blue;
    id =ui ->form_id ->text();
    voltaje =ui ->form_voltaje ->text();
    x =ui ->form_x ->text();
    y =ui ->form_y ->text();
    red =ui ->form_red ->text();
    green =ui ->form_green ->text();
    blue =ui ->form_blue ->text();
    Neurona neurona(id.toInt(), voltaje.toFloat(), x.toInt(), y.toInt(), red.toInt(), green.toInt(), blue.toInt());
    ui ->form_id ->setText("");
    ui ->form_voltaje ->setText("");
    ui ->form_x ->setText("");
    ui ->form_y ->setText("");
    ui ->form_red ->setText("");
    ui ->form_green ->setText("");
    ui ->form_blue ->setText("");
    neurona.print();
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}

