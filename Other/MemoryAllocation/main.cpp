#include <iostream>
#include "SomeObject.h"

int main() {

    SomeObject* object = new SomeObject();

    object->setNumber(5);
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;
    object->~SomeObject();
    new (object) SomeObject();
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;

/*    void* temp = malloc(sizeof(SomeObject));
//    void *temp = operator new(sizeof(SomeObject)); //this also does the same thing as the previous line.
    SomeObject* object = new(temp) SomeObject();

    object->setNumber(10);
    std::cout << "Hello, object number: " << object->getNumber() << std::endl;

    delete object;
//    object->~SomeObject();
//    operator delete(static_cast<void *>(object));
//    free(temp);

    std::cout << "Hello, object number: " << object->getNumber() << std::endl;

//    object->~SomeObject();
//    operator delete(static_cast<void *>(object));*/

    return 0;
}
