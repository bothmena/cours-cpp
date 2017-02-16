//
// Created by bothmena on 16/02/17.
//

#include <iostream>
#include "EventList.h"

void showMenu();

using namespace std;

int main() {

    int choice;
    EventList *eventList = new EventList();
    showMenu();
    do {

        cout << "Votre choix: ";
        cin >> choice;

        /*if ( choice > 2 && operateur->getTaille() == 0 ) {

            cout << "La liste des abonnés est vide!" << endl;
            cout << "Veuillez ajouter quelques abonnés avant." << endl;
            continue;
        }*/
        switch ( choice ) {

            case 0:
                cout << "Vous avez quitter le programme" << endl;
                break;
            case 1:
                cout << "Ajout d'un nouveau evenement" << endl;
                eventList->ajouter();
                break;
            case 2:
                cout << "Affichage d'evenements." << endl;
                eventList->afficher();
                break;
            case 3:
                eventList->rechercher();
                break;
            case 4:
                eventList->supprimer();
                break;
            case 5:
                eventList->afficherParDate();
                break;
            case 6:
                eventList->regrouperParType();
                break;
            default:
                cout << "Mauvais Choix!!!" << endl;
                showMenu();
                break;
        }

    } while ( choice != 0 );

    return 0;
}

void showMenu() {

    cout << "Choisir Une parmi ces options:" << endl;
    cout << "1: Ajouter un evenement" << endl;
    cout << "2: Afficher les evenement" << endl;
    cout << "3: Rechrger un evenement" << endl;
    cout << "4: Supprimer un evenement" << endl;
    cout << "5: Evenements (associés a une année)" << endl;
    cout << "6: Evenements (associés a un type)" << endl;
    cout << "0: Quitter" << endl;
}
