

#include "compte_courant.h"
#include<iostream>
using namespace std;

CompteCourant::CompteCourant():Compte()
{
    solde=-500;
}
CompteCourant::CompteCourant(long num,double s):Compte(num,s)
{
    if (s<-500)
        s=-500;
}
////////////////////////////::
////methode retirer de la classe CompteCourant
bool CompteCourant::retirer(double montant)
{
    bool b;
    if((solde-montant)>=-500)
    {
        solde=solde-montant;
        b=true;
    }
    else
    {
        b=false;
    }

return b;

}

