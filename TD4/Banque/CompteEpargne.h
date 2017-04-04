//
// Created by bothmena on 04/04/17.
//

#ifndef CPLUSPLUS_COMPTEEPARGNE_H
#define CPLUSPLUS_COMPTEEPARGNE_H


#include "Compte.h"

class CompteEpargne: public Compte {

    private:
    double tauxInteret;

    public:
    CompteEpargne();
    CompteEpargne( double );
    CompteEpargne( long, double );
    void retirer(  double );
    double calculerInteret();
};


#endif //CPLUSPLUS_COMPTEEPARGNE_H
