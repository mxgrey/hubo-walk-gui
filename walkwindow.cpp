#include "walkwindow.h"
#include "ui_walkwindow.h"

WalkWindow::WalkWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WalkWindow)
{
    ui->setupUi(this);
}

WalkWindow::~WalkWindow()
{
    delete ui;
}
