//
// Created by bothmena on 05/04/17.
//

#include "BaseCriminal.h"

BaseCriminal::BaseCriminal() {

    this->nom = "unnamed";
}

BaseCriminal::BaseCriminal(string nom) {

    this->nom = nom;
}

void BaseCriminal::ajouter(Coupable *coupable) {

    this->coupables[ coupable->getMatricule() ] = coupable;
}

void BaseCriminal::supprimer(Coupable *coupable) {

    if (this->coupables.find( coupable->getMatricule() ) == this->coupables.end()) {
        std::cout << "Coupable avec matricule '" << coupable->getMatricule() << "' est introuvable!" << endl;
    } else {
        // delete the pointer from the map
        this->coupables.erase( coupable->getMatricule() );
        // delete the object from the heap
        delete coupable;
    }
}

void BaseCriminal::afficherTous() {

    int nbrCrimesTotal = 0;
    cout << "Type - matricule - nom - CIN - age - nbrCrimes - duree - observation" << endl;
    this->iterator = this->coupables.begin();
    while ( this->iterator != this->coupables.end() ) {

        (*this->iterator).second->afficher();
        nbrCrimesTotal += (*this->iterator).second->getNbrCrimes();
        this->iterator++;
    }
    cout << "nbre total de crimes: " << nbrCrimesTotal << endl;
    cout << "---------------------------------" << endl;
}

void BaseCriminal::afficherInfCinq() {

    cout << "Type - matricule - nom - CIN - age - nbrCrimes [- duree - observation]" << endl;
    this->iterator = this->coupables.begin();
    while ( this->iterator != this->coupables.end() ) {

        if ( (*this->iterator).second->getNbrCrimes() < 5 )
            (*this->iterator).second->afficher();
        this->iterator++;
    }
    cout << "---------------------------------" << endl;
}

BaseCriminal::~BaseCriminal() {

    cout << "BaseCriminal's Destructor" << endl;
    this->iterator = this->coupables.begin();
    while ( this->iterator != this->coupables.end() ) {

        // We should delete the object instead of calling the destructor manually
//        (*this->iterator).second->~Coupable();
        delete (*this->iterator).second;
        this->iterator++;
    }
}
