//
// Created by bothmena on 19/04/17.
//

#include "OverloadedObject.h"

int OverloadedObject::getNumber() const {

    return number;
}

void OverloadedObject::setNumber(int number) {

    OverloadedObject::number = number;
}

OverloadedObject::~OverloadedObject() {

    cout << "In OverloadedObject Destructor" << endl;
}

OverloadedObject::OverloadedObject() {

    cout << "In OverloadedObject Constructor" << endl;
    this->number = 0;
}

void* OverloadedObject::operator new( size_t size ) {

    cout << "In OverloadedObject overloaded new" << endl;
    return std::malloc(size);
}

void OverloadedObject::operator delete(void* ptr) {

    cout << "In OverloadedObject delete operator" << endl;
    free(ptr);
}

/*void* OverloadedObject::operator new( size_t size ) throw(std::bad_alloc) {

    void* temp;
//    size_t size = sizeof( OverloadedObject );
    cout << "In overloaded new" << endl;
    temp = malloc( size );
    cout << "size :" << size << endl;
    if(!temp){
        bad_alloc ba;
        throw ba;
    }
    return temp;
}

void OverloadedObject::operator delete( void* memo ) {

    cout << "In delete operator" << endl;
    free( memo );
}*/
