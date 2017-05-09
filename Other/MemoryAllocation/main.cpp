#include <iostream>
#include "Object.h"
#include "OverloadedObject.h"

int objectMain();
int overloadedObjectMain();

int main() {

    objectMain();
    overloadedObjectMain();

    return 0;
}

int objectMain() {

    Object* object = new Object();

    std::cout << "--------------- objectMain start" << std::endl;
    object->setNumber(5);
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;

    delete object;
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;

    std::cout << "--------------- objectMain end" << std::endl;

    return 0;
}

int overloadedObjectMain() {

    std::cout << "--------------- overloadedObjectMain start" << std::endl;

    OverloadedObject* overloadedObject = new OverloadedObject;
    overloadedObject->setNumber(5);
    std::cout << "Hello, object number: " << overloadedObject->getNumber() << std::endl;

    delete overloadedObject;
    std::cout << "Hello, object number: " << overloadedObject->getNumber() << std::endl;

    std::cout << "--------------- overloadedObjectMain end" << std::endl;

    return 0;
}


