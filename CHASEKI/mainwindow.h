#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clock.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void btn_start_click();
    void btn_stop_click();
    void btn_reset_click();
    void on_alarm();

private:
    Ui::MainWindow *ui;
    Clock *clock;
};
#endif // MAINWINDOW_H
