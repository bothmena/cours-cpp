#include"abonne.h"
#include"ouvrage.h"
#include <iostream>

using namespace std;

Abonne::Abonne()
{
     id=0;
    nom="";
    num=0;


}
Abonne::Abonne(int a,string b,int c)
{
    id=a;
    nom=b;
    num=c;


}
void Abonne::afficher()
{
    cout<<"son id est: "<<id<<" son nom est: "<<nom<<" son num de son abonnement est: "<<num;
    if(titre=="")
       cout <<"cet abonn� n'a pas emprunt� un Ouvrage "<<endl;
    else
         cout <<"cet abonn� a  emprunt� un Ouvrage :son titre est  "<<titre<<endl;
}

Abonne::~Abonne()
{ }


