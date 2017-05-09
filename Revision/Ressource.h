//
// Created by bothmena on 09/05/17.
//

#ifndef CPLUSPLUS_RESSOURCE_H
#define CPLUSPLUS_RESSOURCE_H

#include <iostream>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

class Ressource {

    private:
        int id;
        Date dateDepot;
        string domain;


    public:
        Ressource();
        Ressource( int id, Date date, string domain );
};

#endif //CPLUSPLUS_RESSOURCE_H
