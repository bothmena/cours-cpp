//
// Created by bothmena on 19/04/17.
//

#ifndef CPLUSPLUS_OverloadedObject_H
#define CPLUSPLUS_OverloadedObject_H

#include <iostream>

using namespace std;

class OverloadedObject {

    private:
        int number;

    public:
        OverloadedObject();
        virtual ~OverloadedObject();

        void* operator new( size_t );
        void  operator delete(void*);

        int getNumber() const;
        void setNumber(int number);
};

#endif //CPLUSPLUS_OverloadedObject_H
