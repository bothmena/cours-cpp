//
// Created by bothmena on 16/02/17.
//

#include "Evenement.h"

Evenement::Evenement() {

    this->date = new Date();
    this->lien = "";
    this->nom = "";
    this->type = "";
}
Evenement::Evenement( Date *date, string lien, string nom, string type ) {

    this->date = date;
    this->lien = lien;
    this->nom = nom;
    this->type = type;
}

void Evenement::saisir() {

    this->date->saisir();
    cout << "Lien : ";
    cin >> this->lien;
    cout << "Nom : ";
    cin >> this->nom;
    cout << "Type [culturelle | politique | scientifique]: ";
    cin >> this->type;
}

void Evenement::afficher() {

    cout << this->getDate()->toString() << ", " << this->nom << ", " << this->lien << ", " << this->type << endl;
}

Date *Evenement::getDate() const {

    return date;
}

void Evenement::setDate(Date *date) {

    Evenement::date = date;
}

const string &Evenement::getLien() const {

    return lien;
}

void Evenement::setLien(const string &lien) {

    Evenement::lien = lien;
}

const string &Evenement::getNom() const {

    return nom;
}

void Evenement::setNom(const string &nom) {

    Evenement::nom = nom;
}

const string &Evenement::getType() const {

    return type;
}

void Evenement::setType(const string &type) {

    Evenement::type = type;
}
