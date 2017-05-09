#include"bibliotheque.h"
#include <iostream>

using namespace std;


vector<Ouvrage*>::iterator Bibliotheque:: rechercher_ouv(string titre)
{
    for(vector< Ouvrage*>::iterator it=tab1.begin(); it!=tab1.end(); ++it)
    {
        if((*it)->gettitre()==titre)
            return(it);
    }
    return(tab1.end());

}
void Bibliotheque::ajouter(const Ouvrage & Ou)
{
    if(rechercher_ouv(Ou.gettitre())==tab1.end())
    {
        Ouvrage *p=new Ouvrage(Ou);
        tab1.push_back(p);
    }
}
void Bibliotheque::ajouter(const Livre & L)
{
    if(rechercher_ouv(L.gettitre())==tab1.end())
    {
        Ouvrage *p=new Livre(L);
        tab1.push_back(p);
    }
}
void Bibliotheque::ajouter(const Video & V)
{
    if(rechercher_ouv(V.gettitre())==tab1.end())
    {
        Ouvrage *p=new Video(V);
        tab1.push_back(p);
    }
}
Ouvrage* Bibliotheque::getouvrage(string titre)
{
    vector<Ouvrage*>::iterator it=rechercher_ouv(titre);
    if(it!=tab1.end())
    {return (*it);
    }

        return (NULL);


}
vector<Abonne>::iterator Bibliotheque:: rechercher_abn(int id)
{
    for(vector< Abonne>::iterator it=tab2.begin(); it!=tab2.end(); ++it)
    {
        if((it)->getid()==id)
            return(it);
    }
    return(tab2.end());

}
void Bibliotheque::ajoutabonne(const Abonne& A)
{
    if(rechercher_abn(A.getid())==tab2.end())
    {
        tab2.push_back(A);
    }

}

Abonne* Bibliotheque::getabonne(int id)
{
    vector<Abonne>::iterator it=rechercher_abn(id);
    if(it!=tab2.end())
       {
       return (&(*it));
       }


       return(NULL);

}
void Bibliotheque::emprunter(string titre,int id)
{
    vector<Ouvrage*>::iterator it1=rechercher_ouv(titre);
    vector<Abonne>::iterator it2=rechercher_abn(id);

    if((it1!=tab1.end())&&(it2!=tab2.end()))
    {
        if((*it1)->getexistence()==true)
        {
             (*it1)->setexistence(false);
            it2->setouvrage((*it1));

        }


    }
}

void Bibliotheque::info()
{
    for(vector< Ouvrage*>::iterator it=tab1.begin(); it!=tab1.end(); ++it)
    {
        (*it)->afficher();


    }
    cout<<"\n La Liste des abonnées "<<endl;
    for(vector< Abonne>::iterator it=tab2.begin(); it!=tab2.end(); ++it)
    {
        (it)->afficher();
    }

}


void Bibliotheque::rendre(int id)
{

    vector<Abonne>::iterator it2=rechercher_abn(id);

    if((it2!=tab2.end()))
    {
        Ouvrage *A=it2->getouvrage();
        if(A!=NULL)
        {
            vector<Ouvrage*>::iterator it1=rechercher_ouv(A->gettitre());
            (*it1)->setexistence(true);
            it2->delete_ouvr();
        }


    }
}
Bibliotheque::~Bibliotheque()
{
    for(vector< Ouvrage*>::iterator it=tab1.begin(); it!=tab1.end(); ++it)
        delete(*it);

}

 Bibliotheque::Bibliotheque(const Bibliotheque & A)
{Ouvrage * O;
 for(vector< Ouvrage*>::const_iterator it=A.tab1.begin(); it!=A.tab1.end(); ++it)
    {
        if (typeid(*(*it))==typeid(Ouvrage))
         O=new Ouvrage(*(*it))   ;
        if (typeid(*(*it))==typeid(Livre))
         O=new Livre(static_cast<const Livre &>(*(*it)))   ;
          if (typeid(*(*it))==typeid(Video))
         O=new Video(static_cast<const Video &>(*(*it)))   ;
          tab1.push_back(O);
    }

    /////les abonnes
   tab2=A.tab2;
}
Bibliotheque & Bibliotheque::operator=(const Bibliotheque & A)
{
    if(this!=&A)
    {
       for(vector< Ouvrage*>::const_iterator it=tab1.begin(); it!=tab1.end(); ++it)
    {delete (*it);}
    tab1.clear();

     Ouvrage * O;
 for(vector< Ouvrage*>::const_iterator it=A.tab1.begin(); it!=A.tab1.end(); ++it)
    {
        if (typeid(*(*it))==typeid(Ouvrage))
         O=new Ouvrage((*(*it)))   ;
        if (typeid(*(*it))==typeid(Livre))
         O=new Livre(static_cast<const Livre &>(*(*it)))   ;
          if (typeid(*(*it))==typeid(Video))
         O=new Video(static_cast<const Video &>(*(*it)))   ;
      tab1.push_back(O);
    }

    /////les abonnes

   tab2=A.tab2;



    }
    return *this;
}
