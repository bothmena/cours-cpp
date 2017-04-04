// Created by bothmena on 04/04/17.

#include "Compte.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"

int main() {

    Compte* compte = new Compte(500);
    CompteCourant* compteCourant = new CompteCourant(500);
    CompteEpargne* compteEpargne = new CompteEpargne(500);

    compte->retirer(499);
    compteCourant->retirer(499);
    compteEpargne->retirer(499);

    compte->afficher();
    compteCourant->afficher();
    compteEpargne->afficher();

    compte->retirer(501);
    compteCourant->retirer(501);
    compteEpargne->retirer(501);

    compte->afficher();
    compteCourant->afficher();
    compteEpargne->afficher();

    compte->retirer(100);
    compteCourant->retirer(100);
    compteEpargne->retirer(100);

    compte->afficher();
    compteCourant->afficher();
    compteEpargne->afficher();
    return 1;
}
