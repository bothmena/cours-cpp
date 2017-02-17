//
// Created by bothmena on 17/02/17.
//

#include "Bibliotheque.h"

void Bibliotheque::afficher() {

    iterator = ouvrages.begin();
    while( iterator != ouvrages.end()) {
        iterator->affich();
        cout << "Prix Stock: " << iterator->prixStock() << "DT" << endl;
        cout << "=======================================" << endl;
        iterator++;
    }
}

float Bibliotheque::prixTotal() {

    float total = 0;

    iterator = ouvrages.begin();
    while( iterator != ouvrages.end()) {

        total += iterator->prixStock();
        iterator++;
    }

    return total;
}

Ouvrage *Bibliotheque::rechercher(int code) {

    iterator = ouvrages.begin();
    while( iterator != ouvrages.end()) {

        if ( iterator->getCode() == code ) {

            long int index = distance(ouvrages.begin(), iterator);
            return &ouvrages.at( index );
        }
        iterator++;
    }
    return NULL;
}

void Bibliotheque::ajouter(Ouvrage *ouvrage) {

    ouvrages.push_back( *ouvrage );
}

void Bibliotheque::diminuerNbExp(int code, int nbExmplaire) {

    Ouvrage* ouvrage = rechercher( code );
    if ( ouvrage == NULL )
        cout << "L'ouvrage n'existe pas " << endl;
    else {

        if ( ouvrage->getNbrExemplaire() < nbExmplaire )
            cout << "Le nbExmplaire donnée est superieur au nbr explr actuel, veuillez utiliser la fonction augmenterNbExp." << endl;
        else {
            ouvrage->setNbrExemplaire( nbExmplaire );
            cout << "diminuation nbre d'exmpl avec succés" << endl;
        }
    }
}

void Bibliotheque::augmenterNbExp(int code, int nbExmplaire) {

    Ouvrage* ouvrage = rechercher( code );
    if ( ouvrage == NULL )
        cout << "L'ouvrage n'existe pas " << endl;
    else {

        if ( ouvrage->getNbrExemplaire() > nbExmplaire )
            cout << "Le nbExmplaire donnée est inferieur au nbr explr actuel, veuillez utiliser la fonction diminuerNbExp." << endl;
        else {
            ouvrage->setNbrExemplaire( nbExmplaire );
            cout << "augmentation nbre d'exmpl avec succés" << endl;
        }
    }
}
