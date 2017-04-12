//
// Created by bothmena on 05/04/17.
//

#include "Coupable.h"

Coupable::Coupable() {

    this->init( 0, "", 0, 0, 0 );
}

Coupable::Coupable(int matricule, string nom, string cin, int age) {

    this->init( matricule, nom, cin, age, 0 );
}

Coupable::Coupable(int matricule, string nom, string cin, int age, int nbrCrimes) {

    this->init( matricule, nom, cin, age, nbrCrimes );
}

void Coupable::init(int matricule, string nom, string cin, int age, int nbrCrimes) {

    this->matricule = matricule;
    this->nom = nom;
    this->cin = cin;
    this->age = age;
    this->nbrCrimes = nbrCrimes;
}

void Coupable::afficher() {

    cout << "Coupable: " << matricule << " - " << nom << " - "
         << cin << " - " << age << " - " << nbrCrimes << endl;
}

int Coupable::getMatricule() const {
    return matricule;
}

Coupable::~Coupable() {

    cout << "Coupable's Destructor" << endl;
}

int Coupable::getNbrCrimes() const {
    return nbrCrimes;
}

void Coupable::setNbrCrimes(int nbrCrimes) {
    Coupable::nbrCrimes = nbrCrimes;
}
