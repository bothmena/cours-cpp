#include"ouvrage.h"
#include <iostream>

using namespace std;

Ouvrage::Ouvrage()
{
    titre="";
    date="";
    existence=true;
cout<<"ctr par defaut "<<endl;
}

Ouvrage::Ouvrage(string a,string b,bool c)
{
    titre=a;
    date=b;
    existence=c;
    cout<<"ctr parametre tire= "<<titre<<endl;
}

void Ouvrage::afficher()
{
    cout<<"le titre est "<<titre<<" la date de sa création est "<<date;
    if(existence==true)
        cout<<" existe déja dans la bibliothéque ";
    else
       cout<<" n'existe pas dans la bibliothéque ";
}

Ouvrage::~Ouvrage()
{

}
