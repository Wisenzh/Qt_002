#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    float Mon = ui->textEdit->toPlainText().toFloat();
    float days = ui->textEdit_2->toPlainText().toFloat();
    float Discount = ui->textEdit_3->toPlainText().toFloat()/100;
    QString StrTxt = QString::number(Mon)+"\r\n"+QString::number(days)+"\r\n"+QString::number(Discount)+"\r\n";

    ui->textBrowser->append(StrTxt);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->clear();
}

void MainWindow::on_pushButton_3_clicked()
{

}
