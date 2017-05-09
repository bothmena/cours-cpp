//
// Created by bothmena on 26/04/17.
//

#ifndef CPLUSPLUS_POINT_H
#define CPLUSPLUS_POINT_H

#include <iostream>

using namespace std;

class Point {

    private:
        int abs;
        int ord;
        string name;

    public:
        Point();
        Point( int, int, string );
        Point operator +( Point& point );
        bool operator ==( Point& point );
        bool operator !=( Point& point );
        void operator =( Point& point );
        void affichage();

};


#endif //CPLUSPLUS_POINT_H
