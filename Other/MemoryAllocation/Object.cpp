//
// Created by bothmena on 15/04/17.
//

#include "Object.h"

int Object::getNumber() const {
    return number;
}

void Object::setNumber(int number) {
    Object::number = number;
}

/*Object::~Object() {

    cout << "In Object Destructor" << endl;
}

Object::Object() {

    cout << "In Object Constructor" << endl;
    this->number = 0;
}*/
