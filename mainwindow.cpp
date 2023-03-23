#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  // ƒŠƒ“ƒS‰æ‘œ‚ð“ü‚ê‚é
  applescene = new QGraphicsScene();
  ui->graphicsView->setScene(applescene);
  QPixmap pixmap(":/res/fruit_ringo.png");
  applescene->addPixmap(pixmap);
}

MainWindow::~MainWindow()
{
  delete applescene;

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
