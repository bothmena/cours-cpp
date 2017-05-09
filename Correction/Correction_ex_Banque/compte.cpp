

#include "compte.h"
#include<iostream>

using namespace std;


Compte::Compte()
{
RIB=0;
solde=0;
}
Compte::Compte(long r,double s)
{
RIB=r;
solde=s;
}


void Compte::deposer(double montant)
{
	solde+=montant;
}

bool Compte::retirer(double montant)
{
	if (solde>=montant)
	{
		solde-=montant;
		return true;}

		return false;

}
void Compte::afficher(){
	cout<<"RIB: "<<RIB<<endl;
	cout<<"Solde: "<<solde<<endl;
}



Compte::~Compte(){}


