#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Melon_clicked()
{
  qDebug() << "melon clicked()!";
}

void MainWindow::on_pushButton_Apple_clicked()
{
  qDebug() << "apple clicked()!";
}

void MainWindow::on_pushButton_Strawbery_clicked()
{
  qDebug() << "strawbery clicked()!";
}
