#include"abonne.h"
#include"ouvrage.h"
#include <iostream>

using namespace std;

Abonne::Abonne()
{
     id=0;
    nom="";
    num=0;
 O=NULL;
}
Abonne::Abonne(int a,string b,int c)
{
    id=a;
    nom=b;
    num=c;
 O=NULL;
}
void Abonne::afficher()
{
    cout<<"son id est: "<<id<<" son nom est: "<<nom<<" son num de son abonnement est: "<<num;
    if(O==NULL)
       cout <<"cet abonné n'a pas emprunté un Ouvrage "<<endl;
    else
        O->afficher();
}



