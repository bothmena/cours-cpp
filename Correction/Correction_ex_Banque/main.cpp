

#include "compte.h"
#include "compte_courant.h"
#include "compte_epargne.h"
#include "banque.h"
#include <iostream>
using namespace std;


int main() {
	Compte C(10,200);
	CompteEpargne C1(20,250,5);
	CompteCourant C2(30,250);

	Banque B,D;
	B.ajouter(C);
	B.ajouter(C1);
	B.ajouter(C2);
    cout<<"\n\n La Banque B:"<<endl;
    B.afficher();

    D=B;
	cout<<"\n\nLa copie D:"<<endl;
D.afficher();
Banque H=B;
cout<<"\n\nLa copie H:"<<endl;
H.afficher();
	return 0;
}
