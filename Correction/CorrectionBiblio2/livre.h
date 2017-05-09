#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED
#include"ouvrage.h"

class Livre:public Ouvrage
{
    string auteur;
public:
    Livre();
    Livre(string,string,bool,string);
    void afficher();
    ~Livre();
};

#endif // LIVRE_H_INCLUDED
