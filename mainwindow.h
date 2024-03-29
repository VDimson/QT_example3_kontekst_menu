#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QContextMenuEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
void MenuContex(QPoint point);
private:
    Ui::MainWindow *ui;
    QContextMenuEvent *e;
    QMenu *menuTwg;
};

#endif // MAINWINDOW_H
