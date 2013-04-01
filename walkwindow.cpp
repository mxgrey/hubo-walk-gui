#include "walkwindow.h"
#include "ui_walkwindow.h"

WalkWindow::WalkWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WalkWindow)
{
    ui->setupUi(this);
}



QString QDoubleSpinBox::textFromValue(double val) const
{
    return QWidget::locale().toString(val, 'g', 6);
}

WalkWindow::~WalkWindow()
{
    delete ui;
}


