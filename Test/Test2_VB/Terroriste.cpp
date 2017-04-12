//
// Created by bothmena on 05/04/17.
//

#include "Terroriste.h"

Terroriste::Terroriste(): Coupable() {

    this->nbrCrimes = 1;
}

Terroriste::Terroriste(int matricule, string nom, string cin, int age):
    Coupable(matricule, nom, cin, age) {

    this->duree = 0;
    this->observation = "";
    this->nbrCrimes = 1;
}

Terroriste::Terroriste(int matricule, string nom, string cin, int age, int nbrCrimes):
    Coupable(matricule, nom, cin, age, nbrCrimes) {

    this->duree = 0;
    this->observation = "";
    this->nbrCrimes = nbrCrimes+1;
}

Terroriste::Terroriste(int matricule, string nom, string cin, int age, int nbrCrimes, int duree, string observation):
    Coupable(matricule, nom, cin, age, nbrCrimes) {

    this->duree = duree;
    this->observation = observation;
    this->nbrCrimes = nbrCrimes+1;
}

void Terroriste::afficher() {


    cout << "Terroriste: " << matricule << " - " << nom << " - "
         << cin << " - " << age << " - " << nbrCrimes <<
         " - " << duree << " - " << observation << endl;
}

Terroriste::~Terroriste() {

    cout << "Terroriste's Destructor" << endl;
}

void Terroriste::setNbrCrimes(int nbrCrimes) {
    Coupable::setNbrCrimes(nbrCrimes + 1);
}
