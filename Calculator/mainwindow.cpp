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

void MainWindow::on_pushButton_Dec_clicked()
{

    bool ok;

    int num = ui->lineEdit->text().toInt(&ok, 10);

    this->ui->lcdNumber_Hex->display(num);
    this->ui->lcdNumber_Dec->display(num);

    qDebug("%d\n", num);

    num /= 1024;
    ui->lcdNumber_KB->display(num);
    num /= 1024;
    ui->lcdNumber_MB->display(num);
    num /= 1024;
    ui->lcdNumber_GB->display(num);
}

void MainWindow::on_pushButton_Hex_clicked()
{
    bool ok;

    int num = ui->lineEdit->text().toInt(&ok, 16);

    ui->lcdNumber_Hex->display(num);
    ui->lcdNumber_Dec->display(num);

    num /= 1024;
    ui->lcdNumber_KB->display(num);
    num /= 1024;
    ui->lcdNumber_MB->display(num);
    num /= 1024;
    ui->lcdNumber_GB->display(num);
}
