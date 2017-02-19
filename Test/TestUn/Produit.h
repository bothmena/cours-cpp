//
// Created by bothmena on 17/02/17.
//

#ifndef CPLUSPLUS_PRODUIT_H
#define CPLUSPLUS_PRODUIT_H

#include <iostream>

using namespace std;

class Produit {

    private:
        int codeABarre; //unique
        int quantite;
        float prixUnitaire;
        float tauxRemise;

    public:
    Produit();
    Produit(int codeABarre, int quantite, float prixUnitaire, float tauxRemise);
    float prixTotal();
    void afficher();

    int getCodeABarre() const;
    int getQuantite() const;
    void setQuantite(int quantite);
};


#endif //CPLUSPLUS_PRODUIT_H
