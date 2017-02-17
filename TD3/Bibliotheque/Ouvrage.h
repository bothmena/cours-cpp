//
// Created by bothmena on 17/02/17.
//

#ifndef CPLUSPLUS_OUVRAGE_H
#define CPLUSPLUS_OUVRAGE_H

#include <iostream>

using namespace std;

class Ouvrage {

    private:
        int code;
        string titre;
        int nbrExemplaire;
        float prixUnitaire;

    public:
    Ouvrage();
    Ouvrage(int code, const string &titre, int nbrExemplaire, float prixUnitaire);
    void affich();
    float prixStock();

    int getCode() const;

    void setCode(int code);

    const string &getTitre() const;

    void setTitre(const string &titre);

    int getNbrExemplaire() const;

    void setNbrExemplaire(int nbrExemplaire);

    float getPrixUnitaire() const;

    void setPrixUnitaire(float prixUnitaire);
};


#endif //CPLUSPLUS_OUVRAGE_H
