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
    string titre;
public:
    Abonne();
    Abonne(int,string,int);
    ~Abonne();
    void afficher();
    int getid() const
    {
        return(id);
    }
    string getouvrage()
    {
        return titre;
    }

void setouvrage(string titre)
{
   this->titre=titre;
}
void delete_ouvr()
{
    titre="";
}


};

#endif // ABONNE_H_INCLUDED
