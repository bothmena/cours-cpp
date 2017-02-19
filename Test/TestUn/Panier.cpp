//
// Created by bothmena on 17/02/17.
//

#include "Panier.h"

Panier::Panier() {}

Panier::Panier(int numero) : numero(numero) {}

void Panier::ajouterProduit(Produit *produit) {

    iterator = produits.begin();
    while( iterator != produits.end()) {

        if ( iterator->getCodeABarre() == produit->getCodeABarre() ) {

            iterator->setQuantite( iterator->getQuantite() + produit->getQuantite() );
            return;
        }
        iterator++;
    }
    produits.push_back( *produit );
}

void Panier::supprimerProduit(Produit *produit) {

    iterator = produits.begin();
    while( iterator != produits.end()) {

        if ( iterator->getCodeABarre() == produit->getCodeABarre() ) {

            produits.erase( iterator );
            cout << "Produit supprimé du panier." << endl;
            return;
        }
        iterator++;
    }
    cout << "Ce produit n'existe pas dans le panier." << endl;
}

void Panier::afficher() {

    iterator = produits.begin();
    while( iterator != produits.end()) {

        iterator->afficher();
        cout << "---------------------------------------------" << endl;
        iterator++;
    }
    cout << "Prix Total: " << prixTotal() << "DT" << endl;
    cout << "---------------------------------------------" << endl;
}

void Panier::afficherQuantInf() {


    iterator = produits.begin();
    while( iterator != produits.end()) {

        if ( iterator->getQuantite() < 10 ) {

            iterator->afficher();
            cout << "---------------------------------------------" << endl;
        }
        iterator++;
    }
}

float Panier::prixTotal() {

    float prixPanier = 0;
    iterator = produits.begin();

    while( iterator != produits.end()) {

        prixPanier += iterator->prixTotal();
        iterator++;
    }

    return prixPanier;
}
