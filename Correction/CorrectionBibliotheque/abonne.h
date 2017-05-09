#ifndef ABONNE_H_INCLUDED
#define ABONNE_H_INCLUDED
#include<string>
#include"livre.h"
#include"video.h"
#include <typeinfo>

using namespace std;

class Abonne
{
    int id;
    string nom;
    int num;
    Ouvrage *O;
public:
    Abonne();
    Abonne(int,string,int);
    ~Abonne();
    void afficher();
    int getid() const
    {
        return(id);
    }
    Ouvrage * getouvrage()
    {
        return O;
    }

void setouvrage(Ouvrage *Ou)
{
    if(typeid(*Ou)==typeid(Livre))
    O=new Livre(static_cast<const Livre &>(*Ou));
    if(typeid(*Ou)==typeid(Video))
    O=new Video(static_cast<const Video &>(*Ou));
    if(typeid(*Ou)==typeid(Ouvrage))
    O=new Ouvrage(*Ou);
}
void delete_ouvr()
{
    O=NULL;
}


};

#endif // ABONNE_H_INCLUDED
