#ifndef SITE_H
#define SITE_H
#include <iostream>
#include <vector>
#include "Ressource.h"
#include "Cours.h"
#include "Exercice.h"
#include <typeinfo>
using namespace std;


class Site
{
    private:
        string responsable;
        vector <Ressource*> tab;
    public:
        Site();
        Site(string);
        virtual ~Site();

        vector <Ressource*>::iterator rechercher_Re(int);
        void ajouter(const Ressource & );
        void ajouter(const Cours & );
        void ajouter(const Exercice & );
        void supprimer(int);
        Cours* max_credit();
        void afficher_ex();
        friend ostream& operator<<(ostream& ,const Site& );
        Site (const Site&);
        Site& operator=(const Site&);


        //méthode supplementaire
        void afficher();

};

#endif // SITE_H
