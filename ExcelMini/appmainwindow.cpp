#include "appmainwindow.h"
#include "ui_appmainwindow.h"

AppMainWindow::AppMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppMainWindow)
{
    ui->setupUi(this);
}

AppMainWindow::~AppMainWindow()
{
    delete ui;
}

void AppMainWindow::connectSignals() {
    //QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_enter_pressed()));
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_actionSalir_triggered()));
}

void AppMainWindow::on_actionSalir_triggered()
{
    close();
}

void AppMainWindow::on_enter_pressed()
{
    ui->line_functionEntry->setText("Enter :P");
}
