#include <iostream>
#include "compte.h"

using namespace std;

int main() {

    Compte *compte = new Compte( 56487, "Proprietaire", 1000 );
    Compte *compteDeux = new Compte( 56487, "Proprietaire Deux", 500 );
    compte->consulterSolde();
    compte->retirerArgent(500);
    compte->consulterSolde();
    compte->deposerArgent(1500);
    compte->consulterSolde();
    compteDeux->consulterSolde();
    compte->transfererArgent(1500, compteDeux );
    compteDeux->consulterSolde();
}