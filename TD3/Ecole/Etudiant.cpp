//
// Created by bothmena on 09/02/17.
//

#include "Etudiant.hpp"
#include "Date.hpp"

void Etudiant::afficher() {

    std::cout << "Nom : " << this->nom << std::endl;
    std::cout << "Adresse : " << this->nom << std::endl;
    std::cout << "Classe : " << this->nom << std::endl;
    std::cout << "Date de naissance : " << this->date << std::endl;
    std::cout << "Nom : " << this->nom << std::endl;
}

void Etudiant::saisir() {

    std::cout << "Ajout d'un nouvel etudiant..." << endl;

    std::cout << "Nom : ";
    std::cin >> this->nom;
    /*std::cin.clear();
    std::cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );*/
    std::cout << "Adresse : ";
    std::cin >> this->adresse;
//    getline( std::cin, this->prenom );

    std::cout << "Classe : ";
    std::cin >> this->classe;

    Date *date = new Date();
    date->saisir();
    this->date = date;

    std::cout << "Numéro Identifiant : ";
    std::cin >> this->numId;
}

const string &Etudiant::getNom() const {

    return nom;
}

void Etudiant::setNom(const string &nom) {

    Etudiant::nom = nom;
}

const string &Etudiant::getAdresse() const {

    return adresse;
}

void Etudiant::setAdresse(const string &adresse) {

    Etudiant::adresse = adresse;
}

const string &Etudiant::getClasse() const {

    return classe;
}

void Etudiant::setClasse(const string &classe) {

    Etudiant::classe = classe;
}

Date *Etudiant::getDate() const {

    return date;
}

void Etudiant::setDate(Date *date) {

    Etudiant::date = date;
}

int Etudiant::getNumId() const {

    return numId;
}

void Etudiant::setNumId(int numId) {

    Etudiant::numId = numId;
}
