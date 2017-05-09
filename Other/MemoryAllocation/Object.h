//
// Created by bothmena on 15/04/17.
//

#ifndef UNTITLED_SOMEOBJECT_H
#define UNTITLED_SOMEOBJECT_H

#include <iostream>

using namespace std;

class Object {

private:
    int number;

public:
    Object(int n){number=n; cout <<"ctr paramtre "<<number<<endl;};
    Object(){cout <<"ctr "<<number<<endl;};
    virtual ~Object(){cout<<"dstr"<<number<<endl;}
    int getNumber() const;
    void setNumber(int number);

};


#endif //UNTITLED_SOMEOBJECT_H
