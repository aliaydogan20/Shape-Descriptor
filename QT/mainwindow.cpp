#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "form.h"
#include "newdialog.h"
#include <QDebug>
#include <QInputDialog>

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

    sec= new Dialog(this);
    sec->show();
    //nd.setModal(true);
    //nd.exec();
}

