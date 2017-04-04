//
// Created by bothmena on 04/04/17.
//

#include "Compte.h"

Compte::Compte() {

    this->numeroCompte = generateNumCompte();
    this->solde = 0;
}

Compte::Compte( double solde ) {

    this->numeroCompte = generateNumCompte();
    this->solde = solde;
}

Compte::Compte(long numCompte, double solde) {

    this->numeroCompte = numCompte;
    this->solde = solde;
}

void Compte::ajouter(double aAjouter) {

    this->solde += aAjouter;
}

void Compte::retirer(double aRetirer) {

    if ( this->solde >= aRetirer )
        this->solde -= this->solde;
    else
        cout << "You don't have enough money!" << endl;
}

void Compte::afficher() {

    cout << "your solde is " << this->solde << "DT" << endl;
}

long Compte::generateNumCompte() {

    /* initialize random seed: */
    srand (time(NULL));
    /* generate secret number between 1 and 123456: */
    this->numeroCompte = rand() % 123455 + 1;
}
