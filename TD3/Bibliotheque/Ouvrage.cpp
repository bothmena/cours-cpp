//
// Created by bothmena on 17/02/17.
//

#include "Ouvrage.h"

int Ouvrage::getCode() const {
    return code;
}

void Ouvrage::setCode(int code) {
    Ouvrage::code = code;
}

const string &Ouvrage::getTitre() const {
    return titre;
}

void Ouvrage::setTitre(const string &titre) {
    Ouvrage::titre = titre;
}

int Ouvrage::getNbrExemplaire() const {
    return nbrExemplaire;
}

void Ouvrage::setNbrExemplaire(int nbrExemplaire) {
    Ouvrage::nbrExemplaire = nbrExemplaire;
}

float Ouvrage::getPrixUnitaire() const {
    return prixUnitaire;
}

void Ouvrage::setPrixUnitaire(float prixUnitaire) {
    Ouvrage::prixUnitaire = prixUnitaire;
}

Ouvrage::Ouvrage():code(0), titre(""), nbrExemplaire(0), prixUnitaire(0) {}

Ouvrage::Ouvrage(int code, const string &titre, int nbrExemplaire, float prixUnitaire) :
    code(code), titre(titre), nbrExemplaire(nbrExemplaire), prixUnitaire(prixUnitaire) {}

void Ouvrage::affich() {

    cout << "Code: " << code << endl;
    cout << "Titre: " << titre << endl;
    cout << "Nombre Exemplaires: " << nbrExemplaire << endl;
    cout << "Prix Unitaire: " << prixUnitaire << "DT" << endl;
}

float Ouvrage::prixStock() {

    return nbrExemplaire * prixUnitaire;
}
