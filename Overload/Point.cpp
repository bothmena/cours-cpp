//
// Created by bothmena on 26/04/17.
//

#include "Point.h"

Point::Point(): abs(0), ord(0), name("unnamed") {}
Point::Point( int abs, int ord, string name ): abs(abs), ord(ord), name( name ) {}

Point Point::operator +( Point& point ) {

    Point p3;
    p3.abs = abs + point.abs;
    p3.ord = ord + point.ord;
    p3.name = name + " " + point.name;

    return p3;
}

void Point::affichage() {

    cout << name << ": " << abs << " * " << ord << endl;
}

bool Point::operator==(Point &point) {

    return this->abs == point.abs && this->ord == point.ord
        && this->name == point.name;
}

bool Point::operator!=(Point &point) {

    return this->abs != point.abs || this->ord != point.ord
           || this->name != point.name;
}

void Point::operator=(Point &point) {

    this->abs = point.abs;
    this->ord = point.ord;
    this->name = point.name;
}
