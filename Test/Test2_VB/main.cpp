// Created by bothmena on 05/04/17.

#include "Coupable.h"
#include "Terroriste.h"
#include "BaseCriminal.h"

int main() {

    Coupable* coupable1 = new Coupable(123, "coupable 1", "8765", 65, 5);
    Coupable* coupable2 = new Coupable(124, "coupable 2", "870065", 43, 3);
    Terroriste* terroriste1 = new Terroriste(125, "terroriste 1", "987", 34, 2);
    Terroriste* terroriste2 = new Terroriste(126, "terroriste 2", "3456", 18, 4);

    BaseCriminal* baseCriminal = new BaseCriminal("Base 1");
    baseCriminal->ajouter( coupable1 );
    baseCriminal->ajouter( terroriste1 );
    baseCriminal->ajouter( terroriste2 );
    baseCriminal->ajouter( coupable2 );
    baseCriminal->ajouter( coupable2 );

    baseCriminal->afficherTous();
    baseCriminal->supprimer( terroriste2 );

    baseCriminal->afficherTous();
    baseCriminal->afficherInfCinq();

    terroriste1->setNbrCrimes(5);
    baseCriminal->afficherInfCinq();

    baseCriminal->~BaseCriminal();

    return 1;
}
