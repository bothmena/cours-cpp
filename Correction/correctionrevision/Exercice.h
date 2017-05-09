#ifndef EXERCICE_H
#define EXERCICE_H

#include "Ressource.h"
#include <iostream>

using namespace std;


class Exercice : public Ressource
{
    private:
        int indice;
        string type;
    public:
        Exercice();
        Exercice(int , string ,string ,int ,string);
        virtual ~Exercice();

        int Getindice() { return indice; }
        void Setindice(int val) { indice = val; }
        string Gettype() { return type; }
        void Settype(string val) { type = val; }

        void afficher();
        friend ostream& operator<<(ostream& ,const Exercice& );
};

#endif // EXERCICE_H
