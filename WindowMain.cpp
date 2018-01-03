/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   WindowMain.cpp
 * Author: droid
 *
 * Created on 3 January, 2018, 12:20 AM
 */

#include "WindowMain.h"
#include "SetData.h"
WindowMain::WindowMain() {
    widget.setupUi(this);
    connect(widget.pushButton,SIGNAL(released()),this,SLOT(buttnHandler()));
}

WindowMain::~WindowMain() {
}
void WindowMain::buttnHandler()
{
    SetData obj;
    obj.editIP(widget.lineEdit->text().toStdString(),widget.label_2,widget.lineEdit_2);
}