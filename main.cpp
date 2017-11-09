#include "mainwindow.h"
#include <QApplication>
#include "login_dailogue.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login_dailogue loginDialogue;
    loginDialogue.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
