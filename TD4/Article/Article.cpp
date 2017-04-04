//
// Created by bothmena on 15/03/17.
//

#include "Article.h"

void Article::afficher() {

    cout << "Prix: " << this->prix << endl;
}

void Article::setPrix( double prix ) {

    this->prix = prix;
}

void Article::getPrix() const {

    return this->prix;
}

string getNom() const {

    return this->nom;
}
