/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SetData.cpp
 * Author: droid
 * 
 * Created on 3 January, 2018, 12:15 AM
 */

#include "DataClass.h"
#include <string>
#include <fstream>
using namespace std;
DataClass::DataClass() {
}


DataClass::~DataClass() {
}
string DataClass::getIP(string filename)
{
    char temp[15];
    ifstream infile(filename);
    infile.seekg(22784);
    infile.read(temp,15);
    string ip(temp);
    return ip;
}
void DataClass::setIP(string ip,QLabel* statLabel,QLabel* fnameEdit)
{
    string filename=fnameEdit->text().toStdString();
    ifstream infile(filename);
    if (infile.good()) 
    {
        ofstream out(filename.c_str(), ios::binary | ios::out | ios::in);
        out.seekp(22784);
        for(int i=0;i<15;i++)
            out.put('\0');
        out.seekp(22784);
        out.write(ip.c_str(), ip.size());
        out.close();
        statLabel->setText("Successfully modified FTP Payload");
    }
}