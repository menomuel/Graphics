#include "mainwindow.h"
#include <assimp/Importer.hpp>
#include <assimp/Defines.h>


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Assimp::Importer importer;
    importer.FreeScene();

    w.show();
    return a.exec();
}
