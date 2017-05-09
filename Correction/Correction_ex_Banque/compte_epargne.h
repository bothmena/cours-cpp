
#ifndef COMPTE_EPARGNE_H_
#define COMPTE_EPARGNE_H_

#include "compte.h"


class CompteEpargne:public Compte
{
    private:
    double interet;

    public:
    CompteEpargne(double,long ,double );
    CompteEpargne();
    ~CompteEpargne(){}
    double get_solde_interet();
    bool retirer(double );

    void afficher();


};


#endif /* COMPTE_EPARGNE_H_ */
