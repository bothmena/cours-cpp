

#ifndef BANQUE_H_
#define BANQUE_H_

#include "compte.h"
#include "compte_courant.h"
#include "compte_epargne.h"
#include<vector>
using namespace std;

class Banque
{
    private:
    vector <Compte *> tab;

    public:
    Banque();
    vector<Compte*>::iterator rechercher(long);
    void afficher();
    void ajouter(const Compte&);
    void ajouter(const CompteCourant &);
    void ajouter(const CompteEpargne &);
    void supprimer(long );
    ~Banque();
    Banque(const Banque& );
    Banque& operator=(const Banque&);

};

#endif /* BANQUE_H_ */
