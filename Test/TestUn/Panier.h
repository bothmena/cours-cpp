//
// Created by bothmena on 17/02/17.
//

#ifndef CPLUSPLUS_PANIER_H
#define CPLUSPLUS_PANIER_H


#include <vector>
#include "Produit.h"

class Panier {

    private:
        int numero; //unique
        vector<Produit> produits;
        vector<Produit>::iterator iterator;

    public:
    Panier();
    Panier(int numero);

    void ajouterProduit( Produit *produit );
    void supprimerProduit( Produit *produit );
    void afficher();
    void afficherQuantInf();
    float prixTotal();
};


#endif //CPLUSPLUS_PANIER_H
