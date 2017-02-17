// Created by bothmena on 17/02/17.

# include <iostream>
#include "Ouvrage.h"
#include "Bibliotheque.h"

int main() {

    Ouvrage *ouvrageUn = new Ouvrage(123, "ouvrage Un", 10, 29);
    Ouvrage *ouvrageDeux = new Ouvrage(234, "ouvrage Deux", 20, 25);
    Ouvrage *ouvrageTrois = new Ouvrage(345, "ouvrage Trois", 30, 15);

    Bibliotheque *bibliotheque = new Bibliotheque();
    bibliotheque->ajouter( ouvrageUn );
    bibliotheque->ajouter( ouvrageDeux );

    bibliotheque->afficher();
    cout << "prix total: " << bibliotheque->prixTotal() << "Dt" << endl;
    bibliotheque->augmenterNbExp( 123, 8 );
    bibliotheque->augmenterNbExp( 123, 18 );
    bibliotheque->diminuerNbExp( 234, 11 );
    bibliotheque->ajouter( ouvrageTrois );
    bibliotheque->afficher();
    cout << "prix total: " << bibliotheque->prixTotal() << "Dt" << endl;

    return 1;
}
