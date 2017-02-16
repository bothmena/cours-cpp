//
// Created by bothmena on 20/01/17.
//

#include <iostream>
#include "compte.h"

using namespace std;

Compte::Compte(int numCompte, string nomProprietaire, float solde) {

    this->numCompte = numCompte;
    this->nomProprietaire = nomProprietaire;
    this->solde = solde;
}

bool Compte::retirerArgent( float howMuch ) {

    if ( this->solde > howMuch ) {

        this->solde -= howMuch;
        return true;
    }
    return false;
}

void Compte::deposerArgent( float howMuch ) {

    this->solde += howMuch;
}

void Compte::consulterSolde() {

    std::cout << "Le solde de " << this->nomProprietaire
              << " est: " << this->solde << "DT" << std::endl;
}

bool Compte::transfererArgent( float howMuch, Compte *compte ) {

    if ( this->retirerArgent( howMuch ) ) {

        compte->deposerArgent( howMuch );
        return true;
    }
    return false;
}

int Compte::getNumCompte() const {
    return numCompte;
}

void Compte::setNumCompte(int numCompte) {
    Compte::numCompte = numCompte;
}

string Compte::getNomProprietaire() const {
    return nomProprietaire;
}

void Compte::setNomProprietaire(string nomProprietaire) {
    Compte::nomProprietaire = nomProprietaire;
}

float Compte::getSolde() const {
    return solde;
}

void Compte::setSolde(float solde) {

    if ( solde > 0 )
        this->solde = solde;
    else
        this->solde = 0;
}
