/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SetData.h
 * Author: droid
 *
 * Created on 3 January, 2018, 12:15 AM
 */

#ifndef SETDATA_H
#define SETDATA_H
#include <string>
#include <QLabel>
#include <QLineEdit>
class SetData {
public:
    SetData();
    void editIP(std::string,QLabel*,QLineEdit*);
    virtual ~SetData();
private:

};

#endif /* SETDATA_H */

