#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    money = 0;
    ui->pbc4->setEnabled(false);
    ui->pbc5->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::change_money(int n)
{
    if(money+n>=500)
    {
        ui->pbc4->setEnabled(true);
        if(money+n>= 1000)
        {
            ui->pbc5->setEnabled(true);
        }
    }
    else {
        ui->pbc4->setEnabled(false);
        ui->pbc5->setEnabled(false);
    }
    money += n;
    ui->lcdNumber->display(QString::number(money));
}

void MainWindow::on_pbc1_clicked()
{
    printf("hello world");
    change_money((10));
}

void MainWindow::on_pbc2_clicked()
{
    change_money((50));
}

void MainWindow::on_pbc3_clicked()
{
    change_money((100));
}

void MainWindow::on_pbc4_clicked()
{
    change_money((-500));
}

void MainWindow::on_pbc5_clicked()
{
    change_money((-1000));
}
