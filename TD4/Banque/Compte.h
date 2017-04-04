//
// Created by bothmena on 04/04/17.
//

#ifndef CPLUSPLUS_COMPTE_H
#define CPLUSPLUS_COMPTE_H

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

class Compte {

    private:
        long generateNumCompte();

    protected:
        long numeroCompte;
        double solde;

    public:
        Compte();
        Compte( double );
        Compte( long, double );
        void ajouter( double );
        virtual void retirer(  double );
        void afficher();
};


#endif //CPLUSPLUS_COMPTE_H
