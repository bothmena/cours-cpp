//
// Created by bothmena on 15/03/17.
//

#include <iostream>
#include "Magazin.h"

using namespace std;

void Magazin::ajouter(Article *article) {

    if ( articles.end() == rechercher( article->getNom() ) )
        articles.push_back( article );
}

void Magazin::afficher(Article *) {

    iterator = articles.begin();
    while( iterator != articles.end()) {

        (*iterator)->afficher();
        cout << "---------------------------------------------" << endl;
        iterator++;
    }
}

Magazin::~Magazin() {

    iterator = articles.begin();
    while( iterator != articles.end()) {

        (*iterator)->~Article();
    }
}

vector<Article *>::iterator Magazin::rechercher(string) {

    return std::vector<Article *>::iterator();
}
