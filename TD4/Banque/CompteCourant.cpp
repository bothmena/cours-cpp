//
// Created by bothmena on 04/04/17.
//

#include "CompteCourant.h"


CompteCourant::CompteCourant(): Compte() {}

CompteCourant::CompteCourant(double solde) : Compte(solde) {}

CompteCourant::CompteCourant(long numCpmte, double solde) : Compte(numCpmte, solde) {}

void CompteCourant::retirer(double aRetirer) {

    if ( this->solde - aRetirer >= -500 )
        this->solde -= aRetirer;
    else
        cout << "solde doit etre > -500DT" << endl;
}
