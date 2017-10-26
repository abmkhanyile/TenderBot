#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStandardItemModel(74, 4, ui->innertabWidget);
    this->setWindowTitle("Tender Bot");
    QFile sitesFile("websites.txt");
    if(!sitesFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Something went wrong, file did not open" <<endl;
    }
    else
    {
        QTextStream out(&sitesFile);
        int count = 0;
        while(!out.atEnd())
        {
            QModelIndex index = model->index(count, 0, QModelIndex());
            model->setData(index, sitesFile.readLine(0).simplified());
            count++;
        }
    }
    ui->tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}
