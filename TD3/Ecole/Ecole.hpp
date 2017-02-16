//
// Created by bothmena on 09/02/17.
//

#ifndef CPLUSPLUS_ECOLE_HPP
#define CPLUSPLUS_ECOLE_HPP

#include <list>
#include "Etudiant.hpp"

class Ecole {

    private:
        list<Etudiant> etudiants;

    public:
        void ajouterEtudiant( Etudiant* );
        void afficherEtudiant();
        void rechercherEtudiant(int );
        void supprimerEtudiant( Etudiant* );
        void afficherParClasse( string classe );

};


#endif //CPLUSPLUS_ECOLE_HPP
