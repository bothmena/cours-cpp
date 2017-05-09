#include"livre.h"
#include <iostream>

using namespace std;

Livre::Livre():Ouvrage()
{
    auteur="";
}

Livre::Livre(string a,string b,bool c,string d):Ouvrage(a,b,c)
{
    auteur=d;
}
void Livre::afficher()
{
    Ouvrage::afficher();
    cout<<" l'auteur est "<<auteur<<endl;
}
Livre::~Livre()
{

}
