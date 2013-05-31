#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class iVjServer : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit iVjServer(QWidget *parent = 0);
    ~iVjServer();
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
