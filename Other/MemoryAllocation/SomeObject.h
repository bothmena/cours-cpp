//
// Created by bothmena on 15/04/17.
//

#ifndef UNTITLED_SOMEOBJECT_H
#define UNTITLED_SOMEOBJECT_H

#include <iostream>

class SomeObject {

private:
    int number;

public:
    SomeObject();
    virtual ~SomeObject();
    int getNumber() const;
    void setNumber(int number);

};


#endif //UNTITLED_SOMEOBJECT_H
