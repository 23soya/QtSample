#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  // �����S�摜������
  applescene = new QGraphicsScene();
  ui->graphicsView->setScene(applescene);
  QPixmap pixmap(":/res/fruit_ringo.png");
  applescene->addPixmap(pixmap);

  // ���� �s���𕶎���̏�����(null�ɂ���)
  ui->labeljudge->setText("");
}

MainWindow::~MainWindow()
{
  delete applescene;

  delete ui;
}

void MainWindow::on_pushButton_Melon_clicked()
{
  qDebug() << "melon clicked()!";

  // �ԈႢ�\��
  ui->labeljudge->setText("Wrong");
}

void MainWindow::on_pushButton_Apple_clicked()
{
  qDebug() << "apple clicked()!";

  // ����\��
  ui->labeljudge->setText("Correct!");
}

void MainWindow::on_pushButton_Strawbery_clicked()
{
  qDebug() << "strawbery clicked()!";

  // �ԈႢ�\��
  ui->labeljudge->setText("Wrong");
}
