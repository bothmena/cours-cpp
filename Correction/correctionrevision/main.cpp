#include "Site.h"
#include <iostream>
#include <vector>
#include "Ressource.h"
#include "Cours.h"
#include "Exercice.h"
#include <typeinfo>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Ressource R(5,"2000","c++");
    Cours C(4,"2001","java","foulan","prog",4);
    Exercice E(3,"2002","c++",2,"qcm");
    Site D;
    D.ajouter(R);
    D.ajouter(E);
    D.ajouter(C);
     cout<<D<<endl;
    Cours *a=D.max_credit();
    if(a!=NULL)
        a->afficher();
    Site F=D;
    cout<<F<<endl;
   Site B;
   B=D;
    cout<<B<<endl;
    return 0;
}
