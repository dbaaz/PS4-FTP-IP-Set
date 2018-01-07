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
#include "DataClass.h"
#include <QFileDialog>
WindowMain::WindowMain() {
    widget.setupUi(this);
    connect(widget.pushButton,SIGNAL(released()),this,SLOT(buttnHandler()));
    connect(widget.pushButton_2,SIGNAL(released()),this,SLOT(buttnHandler()));
}

WindowMain::~WindowMain() {
}
void WindowMain::buttnHandler()
{
    DataClass obj;
    if(sender()==widget.pushButton)
    {   
        obj.setIP(widget.lineEdit->text().toStdString(),widget.label_2,widget.label_4);
    }
    else
    {
        QString fileName = QFileDialog::getOpenFileName(this,tr("Open Payload"), ".", tr("Binary Files (*.bin)"));
        if(fileName.length()>0)
        {
            widget.label_4->setText(fileName);
            widget.pushButton->setEnabled(true);
            widget.label_6->setText(QString::fromStdString(obj.getIP(fileName.toStdString())));
        }
    }
}