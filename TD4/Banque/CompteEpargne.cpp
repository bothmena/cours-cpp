//
// Created by bothmena on 04/04/17.
//

#include "CompteEpargne.h"

CompteEpargne::CompteEpargne() {

    this->tauxInteret = 5.0;
}

CompteEpargne::CompteEpargne(double solde) : Compte( solde ){

    this->tauxInteret = 5.0;
}

CompteEpargne::CompteEpargne(long numCompte, double solde) : Compte( numCompte, solde ){

    this->tauxInteret = 5.0;
}

void CompteEpargne::retirer(double aRetirer) {

    if ( this->solde >= ( aRetirer + 5 ) )
        this->solde -= aRetirer;
    else
        cout << "vous devez lessez au- 5dt dans votre compte!" << endl;
}

double CompteEpargne::calculerInteret() {

    return this->solde * this->tauxInteret;
}
