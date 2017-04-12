//
// Created by bothmena on 05/04/17.
//

#ifndef CPLUSPLUS_TERRORISTE_H
#define CPLUSPLUS_TERRORISTE_H


#include "Coupable.h"

class Terroriste: public Coupable {

    private:
    int duree;
    string observation;

    public:
    Terroriste();
    Terroriste( int matricule, string nom, string cin, int age );
    Terroriste( int matricule, string nom, string cin, int age, int nbrCrimes );
    Terroriste( int matricule, string nom, string cin, int age, int nbrCrimes, int duree, string observation );

    ~Terroriste();

    void afficher();
    virtual void setNbrCrimes(int nbrCrimes);
};


#endif //CPLUSPLUS_TERRORISTE_H
