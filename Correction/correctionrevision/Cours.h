#ifndef COURS_H
#define COURS_H

#include "Ressource.h"
#include <iostream>
using namespace std;


class Cours : public Ressource
{
    private:
        string responsable;
        string titre;
        int credit;
    public:
        Cours();
        Cours(int ,string ,string ,string ,string ,int );
        virtual ~Cours();

        string Getresponsable() { return responsable; }
        void Setresponsable(string val) { responsable = val; }
        string Gettitre() { return titre; }
        void Settitre(string val) { titre = val; }
        int Getcredit() { return credit; }
        void Setcredit(int val) { credit = val; }


        void afficher();
        friend ostream& operator<<(ostream& ,const Cours& );
};

#endif // COURS_H
