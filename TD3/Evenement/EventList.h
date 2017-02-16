//
// Created by bothmena on 16/02/17.
//

#ifndef CPLUSPLUS_EVENTLIST_H
#define CPLUSPLUS_EVENTLIST_H

#include <list>
#include "Evenement.h"

using namespace std;

class EventList {

private:
    list<Evenement*> eventList;
    list<Evenement*>::iterator iterator;

public:
    void ajouter();
    void afficher();
    void afficherParDate();
    void rechercher();
    void regrouperParType();
    void supprimer();
};

#endif //CPLUSPLUS_EVENTLIST_H
