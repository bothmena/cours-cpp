//
// Created by bothmena on 17/02/17.
//

#include "Produit.h"

Produit::Produit() {

    this->codeABarre = 0;
    this->quantite = 0;
    this->prixUnitaire = 0;
    this->tauxRemise = 0;
}

Produit::Produit(int codeABarre, int quantite, float prixUnitaire, float tauxRemise)  {

    this->codeABarre = codeABarre;
    this->quantite = quantite;
    this->prixUnitaire = prixUnitaire;
    this->tauxRemise = tauxRemise;
}

float Produit::prixTotal() {
    return  prixUnitaire * quantite * (100 - tauxRemise) / 100;
}

void Produit::afficher() {

    cout << "Code à barre: " << codeABarre << endl;
    cout << "Quantité: " << quantite << endl;
    cout << "Prix Unitaire: " << prixUnitaire << "DT" << endl;
    cout << "Taux de remise: " << tauxRemise << "%" << endl;
    cout << "Prix Total: " << prixTotal() << "DT" << endl;
}

int Produit::getCodeABarre() const {
    return codeABarre;
}

int Produit::getQuantite() const {
    return quantite;
}

void Produit::setQuantite(int quantite) {
    Produit::quantite = quantite;
}
