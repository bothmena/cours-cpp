//
// Created by bothmena on 05/04/17.
//

#ifndef CPLUSPLUS_COUPABLE_H
#define CPLUSPLUS_COUPABLE_H

#include <iostream>

using namespace std;

class Coupable {

    protected:
    int matricule;
    string nom;
    string cin;
    int age;
    int nbrCrimes;

    public:
    Coupable();
    Coupable( int matricule, string nom, string cin, int age );
    Coupable( int matricule, string nom, string cin, int age, int nbrCrimes );

    virtual ~Coupable();

    void init( int matricule, string nom, string cin, int age, int nbrCrimes );
    virtual void afficher();

    int getMatricule() const;
    int getNbrCrimes() const;

    virtual void setNbrCrimes(int nbrCrimes);
};


#endif //CPLUSPLUS_COUPABLE_H
