#include "Exercice.h"
#include "Ressource.h"

Exercice::Exercice():Ressource()
{
    indice=1;
    type="";
}
Exercice::Exercice(int a, string b,string c,int d,string e):Ressource(a,b,c)
{
    indice=d;
    if(d<1 || d>5)
    {
        indice=1;
    }
    type=e;
}
Exercice::~Exercice()
{
    //dtor
}
void Exercice :: afficher()
{
    Ressource::afficher();
    cout<<"indice="<<indice<<"/type="<<type<<endl;
    cout<<"******************************"<<endl;
}
ostream& operator<<(ostream& out ,const Exercice& p)
{
    out<<p.id<<","<<p.date<<","<<p.domain<<","<<p.indice<<","<<p.type<<endl;
    return (out);
}
