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

#ifndef DATACLASS_H
#define DATACLASS_H
#include <string>
#include <QLabel>
#include <QLineEdit>
#include <fstream>
class DataClass {
public:
    DataClass();
    void setIP(std::string,QLabel*,QLabel*);
    std::string getIP(std::string);
    virtual ~DataClass();
private:

};

#endif /* SETDATA_H */

