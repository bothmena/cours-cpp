//
// Created by bothmena on 05/04/17.
//

#ifndef CPLUSPLUS_BASECRIMINAL_H
#define CPLUSPLUS_BASECRIMINAL_H

#include <iostream>
#include <map>
#include "Coupable.h"

using namespace std;

class BaseCriminal {

    protected:
    string nom;
    map<int, Coupable*> coupables;
    map<int, Coupable*>::iterator iterator;

    public:
    BaseCriminal();
    BaseCriminal( string nom );
    ~BaseCriminal();

    void ajouter( Coupable* coupable );
    void supprimer( Coupable* coupable );
    void afficherTous();
    void afficherInfCinq();
};

#endif //CPLUSPLUS_BASECRIMINAL_H
