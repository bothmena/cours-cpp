//
// Created by bothmena on 16/02/17.
//

#include "EventList.h"

void EventList::ajouter(  ) {

    Evenement* evenement = new Evenement();
    evenement->saisir();

    if ( this->eventList.empty() )
        this->eventList.push_back( evenement );
    else {

        bool injected = false;
        this->iterator = this->eventList.begin();
        for(this->iterator; this->iterator != this->eventList.end(); this->iterator++) {

            if((*this->iterator)->getDate()->getYear() >= evenement->getDate()->getYear() ) {
                this->eventList.insert( this->iterator, evenement );
                injected = true;
                return;
            }
        }
        if ( !injected )
            this->eventList.push_back( evenement );
    }
}

void EventList::afficher() {

    this->iterator = this->eventList.begin();
    while ( this->iterator != this->eventList.end() ) {

        (*this->iterator)->afficher();
        this->iterator++;
    }
}

void EventList::afficherParDate() {

    int year;
    cout << "Année de l'evenements : ";
    cin >> year;

    this->iterator = this->eventList.begin();
    while ( this->iterator != this->eventList.end() ) {

        if ( (*this->iterator)->getDate()->getYear() == year )
            (*this->iterator)->afficher();
        this->iterator++;
    }
}

void EventList::rechercher() {

    string nom;
    cout << "Nom de l'evenement : ";
    cin >> nom;

    this->iterator = this->eventList.begin();
    while ( this->iterator != this->eventList.end() ) {

        if ( (*this->iterator)->getNom() == nom ) {
            cout << "Event trouvé" << endl;
            (*this->iterator)->afficher();
            return;
        }
        this->iterator++;
    }
    cout << "Event NON trouvé" << endl;
}

void EventList::regrouperParType() {

    string type;
    cout << "Type de l'evenement [culturelle | politique | scientifique]: ";
    cin >> type;

    this->iterator = this->eventList.begin();
    while ( this->iterator != this->eventList.end() ) {

        if ( (*this->iterator)->getType() == type )
            (*this->iterator)->afficher();
        this->iterator++;
    }
}

void EventList::supprimer() {

    string nom;
    cout << "Nom de l'evenement : ";
    cin >> nom;

    this->iterator = this->eventList.begin();
    while ( this->iterator != this->eventList.end() ) {

        if ( (*this->iterator)->getNom() == nom ) {
            cout << "Event supprimé" << endl;
            this->eventList.erase(this->iterator);
            return;
        }
        this->iterator++;
    }
    cout << "Event NON trouvé" << endl;
}
