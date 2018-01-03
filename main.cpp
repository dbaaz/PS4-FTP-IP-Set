/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: droid
 *
 * Created on 3 January, 2018, 12:13 AM
 */

#include <QApplication>
#include "WindowMain.h"
int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    WindowMain *obj = new WindowMain();
    obj->show();
    // create and show your widgets here
    return app.exec();
}
