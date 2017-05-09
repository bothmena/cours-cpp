#include <iostream>
#include "Ressource.h"

Ressource::Ressource()
{
    id=0;
    date="";
    domain="";
}
Ressource::Ressource(int a,string b,string c)
{
    id=a;
    date=b;
    domain=c;
}

Ressource::~Ressource()
{
    //dtor
}
void Ressource :: afficher()
{
    cout<<"id="<<id<<"/date="<<date<<"/domain="<<domain<<endl;
    cout<<"------------------------"<<endl;
}
ostream& operator<<(ostream& out ,const Ressource& p)
{
    out<<p.id<<","<<p.date<<","<<p.domain<<endl;
    return (out);
}
