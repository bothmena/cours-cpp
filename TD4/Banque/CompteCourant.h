//
// Created by bothmena on 04/04/17.
//

#ifndef CPLUSPLUS_COMPTECOURANT_H
#define CPLUSPLUS_COMPTECOURANT_H


#include "Compte.h"

class CompteCourant: public Compte {

    private:
        double tauxInteret;

    public:
        CompteCourant();
        CompteCourant( double solde );
        CompteCourant( long numCpmte, double solde );
        void retirer(  double );
        double calculerInteret();
};


#endif //CPLUSPLUS_COMPTECOURANT_H
