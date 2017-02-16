//
// Created by bothmena on 16/02/17.
//

#ifndef CPLUSPLUS_EVENEMENT_H
#define CPLUSPLUS_EVENEMENT_H

#include <iostream>
#include "../Ecole/Date.hpp"

using namespace std;

class Evenement {

private:
    Date *date;
    string lien;
    string nom;
    string type;

public:
    Evenement();
    Evenement( Date*, string, string, string );
    void saisir();
    void afficher();
    Date *getDate() const;
    void setDate(Date *date);
    const string &getLien() const;
    void setLien(const string &lien);
    const string &getNom() const;
    void setNom(const string &nom);
    const string &getType() const;
    void setType(const string &type);
};

#endif //CPLUSPLUS_EVENEMENT_H
