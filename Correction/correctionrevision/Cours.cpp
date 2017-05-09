#include "Cours.h"
#include "Ressource.h"
#include <iostream>

Cours::Cours():Ressource()
{
    responsable="";
    titre="";
    credit=0;

}
Cours::Cours(int a,string b,string c,string d,string e,int f):Ressource(a,b,c)
{
    responsable=d;
    titre=e;
    credit=f;
}

Cours::~Cours()
{
    //dtor
}
void Cours :: afficher()
{
    Ressource::afficher();
    cout<<"responsable="<<responsable<<"/titre="<<titre<<"/credit="<<credit<<endl;
    cout<<"******************************"<<endl;
}
ostream& operator<<(ostream& out ,const Cours& p)
{
    out<<p.id<<","<<p.date<<","<<p.domain<<","<<p.responsable<<","<<p.titre<<","<<p.credit<<endl;
    return (out);
}
