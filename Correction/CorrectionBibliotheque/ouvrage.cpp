#include"ouvrage.h"
#include <iostream>

using namespace std;

Ouvrage::Ouvrage()
{
    titre="";
    date="";
    existence=true;

}

Ouvrage::Ouvrage(string a,string b,bool c)
{
    titre=a;
    date=b;
    existence=c;
}
void Ouvrage::afficher()
{
    cout<<"le titre est "<<titre<<" la date de sa cr�ation est "<<date;
    if(existence==true)
        cout<<" existe d�ja dans la biblioth�que ";
    else
       cout<<" n'existe pas dans la biblioth�que ";
}

Ouvrage::~Ouvrage()
{

}
