

#ifndef COMPTE_COURANT_H_
#define COMPTE_COURANT_H_

#include "compte.h"

class CompteCourant:public Compte
{
    private:
    //aucun attribue à ajouter
    public:
    CompteCourant();
    CompteCourant(long ,double );

    ~CompteCourant(){}
    bool retirer(double );

};


#endif /* COMPTE_COURANT_H_ */
