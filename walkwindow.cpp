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


void WalkWindow::on_pb_send_clicked()
{
    zmp_cmd_t cmd;
    
    cmd.walk_type = getWalkType();
    cmd.ik_sense  = getIKSense();
    
    cmd.max_step_count = ui->spin_steps->value();
    
    cmd.walk_circle_radius = ui->spin_walk_circle_radius->value();
    cmd.walk_dist = ui->spin_walk_dist();
    if(ui->rad_backward->isChecked()) cmd.walk_dist *= -1;
    cmd.walk_sideways = ui->rad_sideways->isChecked();
    
    // TODO: continue from Swing Foot Settings
}


walktype WalkWindow::getWalkType()
{
    switch( ui->list_walktype->currentIndex() )
    {
        case 1:
            return walk_line;
        case 2:
            return walk_circle;
        default:
            return walk_canned;
    }
}


ik_error_sensitivity WalkWindow::getIKSense()
{
    switch( ui->list_sensitivity->currentIndex() )
    {
        case 1:
            return ik_swing_permissive;
        case 2:
            return ik_sloppy;
        default:
            return ik_strict;
    }
}
