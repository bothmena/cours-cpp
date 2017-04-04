//
// Created by bothmena on 15/03/17.
//

#ifndef CPLUSPLUS_MAGAZIN_H
#define CPLUSPLUS_MAGAZIN_H

#include <vector>
#include <string>
#include "Article.h"

using namespace std;

class Magazin {

    private:
    vector<Article*> articles;
    vector<Article*>::iterator iterator;

    public:
    void ajouter( Article* );
    void afficher( Article* );
    vector<Article*>::iterator rechercher( string );
    void ~Magazin();

};


#endif //CPLUSPLUS_MAGAZIN_H
