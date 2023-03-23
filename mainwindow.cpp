#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  // リンゴ画像を入れる
  applescene = new QGraphicsScene();
  ui->graphicsView->setScene(applescene);
  QPixmap pixmap(":/res/fruit_ringo.png");
  applescene->addPixmap(pixmap);

  // 正解 不正解文字列の初期化(nullにする)
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

  // 間違い表示
  ui->labeljudge->setText("Wrong");
}

void MainWindow::on_pushButton_Apple_clicked()
{
  qDebug() << "apple clicked()!";

  // 正解表示
  ui->labeljudge->setText("Correct!");
}

void MainWindow::on_pushButton_Strawbery_clicked()
{
  qDebug() << "strawbery clicked()!";

  // 間違い表示
  ui->labeljudge->setText("Wrong");
}
