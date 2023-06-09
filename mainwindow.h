#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_Melon_clicked();

    void on_pushButton_Apple_clicked();

    void on_pushButton_Strawbery_clicked();

private:
  Ui::MainWindow *ui;
  QGraphicsScene* applescene;
};

#endif // MAINWINDOW_H
