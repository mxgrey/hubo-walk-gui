#ifndef WALKWINDOW_H
#define WALKWINDOW_H

#define HAVE_HUBO_ACH
#include <hubo-zmp.h>

#include <QMainWindow>

namespace Ui {
class WalkWindow;
}

class WalkWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WalkWindow(QWidget *parent = 0);
    ~WalkWindow();
    
private:
    Ui::WalkWindow *ui;
    walktype getWalkType();
    ik_error_sensitivity getIKSense();
    
    
private slots:
    void on_pb_send_clicked();
    
    
};

#endif // WALKWINDOW_H
