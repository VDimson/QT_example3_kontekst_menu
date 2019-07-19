#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   // QMenu * menu1 = new QMenu(this);
        /* Создаём действия для контекстного меню */
//QAction * editDevice = new QAction(trUtf8("Редактировать"), this);
//        QAction * deleteDevice = new QAction(trUtf8("Удалить"), this);

//        menu->addAction(editDevice);
//        menu->addAction(deleteDevice);
        /* Вызываем контекстное меню */


  ui->treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
menuTwg=new QMenu(ui->treeWidget);
QList<QAction*> act;
act.append(ui->action);
act.append(ui->action_1);
act.append(ui->action_2);
menuTwg->addActions(act);
//menuTwg->setGeometry(ui->treeWidget->rect());
//menuTwg->addMenu(ui->menu_2);
QTreeWidgetItem* GlavStroka =new QTreeWidgetItem(ui->treeWidget);
//QTreeWidgetItem* stroka(GlavStroka);
QTreeWidgetItem *stroka(GlavStroka);

stroka->setText(0,"Вавилов");
stroka->setText(1,"Дмитрий");
stroka->setText(2,"Александрович");
stroka->setText(3,"19.10.1975");


connect(ui->treeWidget,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(MenuContex(QPoint)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::MenuContex(QPoint point)
{
// menuTwg->move(point);
   // menuTwg->popup(point);
    int koord=point.x();


//menuTwg->setGeometry(koord+200,100,101,100);
ui->statusBar->showMessage(QString::number(point.rx()));
//menuTwg->exec(QPoint(point.rx(),point.ry()));
menuTwg->exec(QCursor::pos());
}
