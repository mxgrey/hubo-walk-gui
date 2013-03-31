#ifndef WALKWINDOW_H
#define WALKWINDOW_H

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
};

#endif // WALKWINDOW_H
