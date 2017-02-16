//
// Created by bothmena on 27/01/17.
//

#ifndef TD2_COMPTE_H
#define TD2_COMPTE_H

using namespace std;

class Compte {

    private:
        int numCompte;
        string nomProprietaire;
        float solde;

    public:
        Compte(int numCompte, string nomProprietaire, float solde);

        bool retirerArgent( float howMuch );
        void deposerArgent( float howMuch );
        void consulterSolde();
        bool transfererArgent( float howMuch, Compte *compte );

        int getNumCompte() const;

        void setNumCompte(int numCompte);

        string getNomProprietaire() const;

        void setNomProprietaire(string nomProprietaire);

        float getSolde() const;

        void setSolde(float solde);
};

#endif //TD2_COMPTE_H
