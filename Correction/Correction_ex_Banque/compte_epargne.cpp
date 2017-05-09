

#include "compte_epargne.h"
#include<iostream>
using namespace std;
CompteEpargne::CompteEpargne():Compte()
{
 solde=5;
}

CompteEpargne::CompteEpargne(double n,long s,double interet):Compte(n,s)
{
   if(solde<5) solde=5;
   this->interet=interet;
}
////////////////////////////::
////methode retirer de la classe CompteEpargne
bool CompteEpargne::retirer(double montant)
{
    bool b;
    if((solde-montant)>=5)
    {
        solde=solde-montant;
        b=true;
    }else
    {
        b=false;
    }

return b;

}


////////////////////////////::
////methode afficher de la classe CompteEpargne
void CompteEpargne::afficher()
{
    /*cout<<"Numero:"<<RIB<<endl;
    cout<<"Interet Annuel:"<<interet<<endl;
    cout<<"Solde:"<<get_solde()<<endl;
    */
    Compte::afficher();
    cout<<"Interet Annuel:"<<interet<<endl;
    cout<<"Montant + Interet Annuel:"<<get_solde_interet()<<endl;


}

////////////////////////////::
////methode get_solde_interet de la classe CompteEpargne
double CompteEpargne::get_solde_interet()
{
	return (solde+((solde*interet)/100));
}


