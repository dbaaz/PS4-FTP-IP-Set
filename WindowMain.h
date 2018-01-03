/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WindowMain.h
 * Author: droid
 *
 * Created on 3 January, 2018, 12:20 AM
 */

#ifndef _WINDOWMAIN_H
#define _WINDOWMAIN_H

#include "ui_WindowMain.h"

class WindowMain : public QMainWindow {
    Q_OBJECT
public:
    WindowMain();
    virtual ~WindowMain();
private:
    Ui::WindowMain widget;
    public slots:
        void buttnHandler();
};

#endif /* _WINDOWMAIN_H */
