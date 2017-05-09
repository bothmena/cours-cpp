// Created by bothmena on 26/04/17.

#include <iostream>
#include "Point.h"

int main() {

    Point point1(5, 5, "point 1");
    Point point2(10, 10, "point 2");

    point1.affichage();
    point2.affichage();

//    Point point3;
//    point3 = point1 + point2;
//    point3.affichage();

    if ( point1 != point2 )
        cout << "pointer1 != pointer2" << endl;
    point1 = point2;
    if ( point1 == point2 )
        cout << "pointer1 == pointer2" << endl;

    return 1;
}
