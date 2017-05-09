#include <iostream>
#include "bibliotheque.h"
#include "abonne.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
     Ouvrage O("ouv1","desc1",true);
      Ouvrage F("nnn","kkk",true);
    Livre L("Livre C++","TD",true,"auteur1");
    Video V("video1","Cours",true,"éditeur1",2);
    Abonne A(12,"mohamed ben ahmed",135);
    Abonne H(123656,"saleh",485);
    Bibliotheque B;
    B.ajouter(L);
    B.ajouter(V);
    B.ajouter(O);
    B.ajoutabonne(A);
    //B.info();
   Abonne *P=B.getabonne(12);
    if(P==NULL)
        cout<<" cet abonnée n'existe pas "<<endl;
    else
        P->afficher();
    B.emprunter("Livre C++",12);
   // B.info();
   //B.rendre(12);
   B.info();

    return 0;
}
