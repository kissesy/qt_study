#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void change_money(int n);
    void grid();
    int money;

private slots:
    void on_pbc1_clicked();

    void on_pbc2_clicked();

    void on_pbc4_clicked();

    void on_pbc3_clicked();

    void on_pbc5_clicked();

    void on_pbc6_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
