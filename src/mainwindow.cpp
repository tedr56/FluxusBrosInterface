#include "mainwindow.h"
#include "ui_mainwindow.h"

iVjServer::iVjServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

iVjServer::~MainWindow()
{
    delete ui;
}
