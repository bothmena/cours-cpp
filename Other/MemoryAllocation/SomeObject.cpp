//
// Created by bothmena on 15/04/17.
//

#include "SomeObject.h"

int SomeObject::getNumber() const {
    return number;
}

void SomeObject::setNumber(int number) {
    SomeObject::number = number;
}

SomeObject::~SomeObject() {

    std::cout << "Hello, object destructor called" << std::endl;
}

SomeObject::SomeObject() {
    this->number = 0;
}
