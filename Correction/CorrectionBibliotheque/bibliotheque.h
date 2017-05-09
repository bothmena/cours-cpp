#ifndef BIBLIOTHEQUE_H_INCLUDED
#define BIBLIOTHEQUE_H_INCLUDED
#include"livre.h"
#include"video.h"
#include"abonne.h"
#include<vector>
using namespace std;
class Bibliotheque
{
    vector<Ouvrage*> tab1;
    vector<Abonne> tab2;
public:
    vector<Ouvrage*>::iterator rechercher_ouv(string);
    Bibliotheque(){};
    Bibliotheque(const Bibliotheque &);
    Bibliotheque & operator=(const Bibliotheque &);
    vector<Abonne>::iterator rechercher_abn(int);
    void ajouter(const Ouvrage&);
    void ajouter(const Livre&);
    void ajouter(const Video&);
    Ouvrage *getouvrage(string);
    void ajoutabonne(const Abonne&);
    Abonne* getabonne(int);
    void emprunter(string,int);
    void rendre(int);
    void info();
    ~Bibliotheque();




};

#endif // BIBLIOTHEQUE_H_INCLUDED
