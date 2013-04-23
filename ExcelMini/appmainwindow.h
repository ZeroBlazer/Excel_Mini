#ifndef APPMAINWINDOW_H
#define APPMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class AppMainWindow;
}

class AppMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit AppMainWindow(QWidget *parent = 0);
    ~AppMainWindow();
    
public slots:
    void on_enter_pressed();

private slots:
    void on_actionSalir_triggered();

private:
    void connectSignals();
    Ui::AppMainWindow *ui;
};

#endif // APPMAINWINDOW_H
