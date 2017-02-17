//
// Created by bothmena on 17/02/17.
//

#ifndef CPLUSPLUS_BIBLIOTHEQUE_H
#define CPLUSPLUS_BIBLIOTHEQUE_H


#include <vector>
#include "Ouvrage.h"

class Bibliotheque {

    private:
        vector<Ouvrage> ouvrages;
        vector<Ouvrage>::iterator iterator;

    public:
        void afficher();
        float prixTotal();
        Ouvrage* rechercher( int code );
        void ajouter( Ouvrage *ouvrage );
        void diminuerNbExp( int code, int nbExmplaire );
        void augmenterNbExp( int code, int nbExmplaire );
};

#endif //CPLUSPLUS_BIBLIOTHEQUE_H
