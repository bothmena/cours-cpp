//
// Created by bothmena on 09/02/17.
//

#ifndef CPLUSPLUS_ETUDIANT_HPP
#define CPLUSPLUS_ETUDIANT_HPP

#import <iostream>
#import "Date.hpp"

using namespace std;

class Etudiant {

    private:
        string nom;
        string adresse;
        string classe;
        Date *date;
        int numId;

    public:
        void afficher();
        void saisir();

        const string &getNom() const;
        void setNom(const string &nom);
        const string &getAdresse() const;
        void setAdresse(const string &adresse);
        const string &getClasse() const;
        void setClasse(const string &classe);
        Date *getDate() const;
        void setDate(Date *date);
        int getNumId() const;
        void setNumId(int numId);
};


#endif //CPLUSPLUS_ETUDIANT_HPP
