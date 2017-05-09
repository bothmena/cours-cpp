#include <iostream>
#include "Object.h"
#include "OverloadedObject.h"

int main() {

    Object* object = new Object(1);

    //object->setNumber(5);
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;
    /*object->~Object();
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;
    new (object) Object();
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;*/
    delete object;
  //  delete object;
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;

    std::cout << "--------------------------------" << std::endl;

   /* OverloadedObject* overloadedObject = new OverloadedObject;

    overloadedObject->setNumber(5);
    std::cout << overloadedObject->getNumber() << std::endl;
    /*overloadedObject->~OverloadedObject();
    std::cout << overloadedObject->getNumber() << std::endl;
    new (overloadedObject) OverloadedObject(  );
    std::cout << "Hello, overloadedObject number: " <<
                  overloadedObject->getNumber() << std::endl;*/
   /* delete overloadedObject;
    std::cout << overloadedObject->getNumber() << std::endl;*/

    return 0;
}
