// Created by bothmena on 17/02/17.

# include <iostream>
#include "Produit.h"
#include "Panier.h"

int main() {

    Produit *produitUn = new Produit( 123, 13, 10, 10 );
    Produit *produitDeux = new Produit( 234, 6, 15, 20 );
    Produit *produitTrois = new Produit( 345, 4, 8, 0 );
    Produit *produitQuatre = new Produit( 567, 9, 12, 25 );

    Panier *panier = new Panier(654);

    cout << "=======================================" << endl;
    cout << "Ajout des produits" << endl;
    cout << "=======================================" << endl;
    panier->ajouterProduit( produitUn );
    panier->ajouterProduit( produitDeux );
    panier->ajouterProduit( produitTrois );
    panier->ajouterProduit( produitTrois );

    cout << "=======================================" << endl;
    cout << "Affiche de tous les elements" << endl;
    cout << "=======================================" << endl;
    panier->afficher();
    cout << "=======================================" << endl;
    cout << "Affiche des prod < 10" << endl;
    cout << "=======================================" << endl;
    panier->afficherQuantInf();
    cout << "=======================================" << endl;
    cout << "Supprimer element inexistant" << endl;
    cout << "=======================================" << endl;
    panier->supprimerProduit( produitQuatre );
    cout << "=======================================" << endl;
    cout << "Supprimer element existant" << endl;
    cout << "=======================================" << endl;
    panier->supprimerProduit( produitDeux );
    cout << "=======================================" << endl;
    cout << "Affiche de tous les elements" << endl;
    cout << "=======================================" << endl;
    panier->afficher();

    return 1;
}
