#include "Site.h"
#include <iostream>
#include <vector>
#include "Ressource.h"
#include "Cours.h"
#include "Exercice.h"
#include <typeinfo>

Site::Site()
{
    responsable="";
}



Site::Site(string a)
{
    responsable=a;
}

Site::~Site()
{
   for(vector< Ressource*>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {delete (*it);}
    tab.clear();
}
vector <Ressource*>::iterator Site:: rechercher_Re(int n)
{
    for(vector< Ressource*>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        if((*it)->Getid()==n)
            return(it);
    }
    return(tab.end());
}
void Site::ajouter(const Ressource & R)
{
    if(rechercher_Re(R.Getid())==tab.end())
    {
        Ressource *p=new Ressource(R);
        tab.push_back(p);
    }
}
void Site::ajouter(const Cours & R)
{
    if(rechercher_Re(R.Getid())==tab.end())
    {
        Ressource *p=new Cours(R);
        tab.push_back(p);
    }
}
void Site::ajouter(const Exercice & R)
{
    if(rechercher_Re(R.Getid())==tab.end())
    {
        Ressource *p=new Exercice(R);
        tab.push_back(p);
    }
}
void Site :: supprimer(int id)
{
    vector <Ressource*> :: iterator it =rechercher_Re(id);
    if(it!=tab.end())
    {
        delete(*it);
        tab.erase(it);
    }
}
Cours* Site :: max_credit()
{
    int max=0;
    int k;
    Cours * g;
    vector <Ressource*> ::iterator it;
    for(it=tab.begin();it!=tab.end();++it)
    {
        if(typeid(*(*it))==typeid(Cours))
        {g= (Cours*)(*it)  ;
            k=(*g).Getcredit();
            if(k>max)
            {
                max=k;
            }
        }
    }
    return(g);
}

void Site :: afficher_ex()
{
    int k;
    Exercice * g;
    vector <Ressource*> ::iterator it;
    for(it=tab.begin();it!=tab.end();++it)
    {
        if(typeid(*(*it))==typeid(Exercice))
        {
            g= (Exercice*)(*it)  ;
            k=(*g).Getindice();
            if(k<3)
            {
                (*(*it)).afficher();
            }
        }
    }
}
//methode1
/*
ostream& operator<<(ostream& out ,const Site& p)
{
    string a;
    for (vector <Ressource*> :: const_iterator it=p.tab.begin();it!=p.tab.end();++it)
    {
        a=(*(*it)).Getdomain();
        if(a=="c++")
        {
            out<<(*(*it)).Getid()<<","<<(*(*it)).Getdate()<<","<<(*(*it)).Getdomain()<<endl;
        }
    }

    return (out);
}
*/
//methode2
ostream& operator<<(ostream& out ,const Site& p)
{
    string a;
    for (vector <Ressource*> :: const_iterator it=p.tab.begin();it!=p.tab.end();++it)
    {
        a=(*(*it)).Getdomain();
        if(a=="c++")
        {
            if(typeid(*(*it))==typeid (Ressource))
            {
                out<<(*(*it));
            }
            else if(typeid(*(*it))==typeid (Cours))
            {
                Cours* c=(Cours*)(*it);
                out<<*c;
            }
            else if(typeid(*(*it))==typeid (Exercice))
            {
                Exercice* e=(Exercice*)(*it);
                out<<*e;
            }
        }
    }

    return (out);
}
Site::Site(const Site & A)
{
 Ressource * O;
 responsable=A.responsable;
 for(vector< Ressource*>::const_iterator it=A.tab.begin(); it!=A.tab.end(); ++it)
    {
        if (typeid(*(*it))==typeid(Ressource))
         O=new Ressource(*(*it))   ;
        if (typeid(*(*it))==typeid(Cours))
         O=new Cours(static_cast<const Cours &>(*(*it)))   ;
        if (typeid(*(*it))==typeid(Exercice))
         O=new Exercice(static_cast<const Exercice &>(*(*it)))   ;
          tab.push_back(O);
    }
}


Site & Site::operator=(const Site & A)
{
    if(this!=&A)
    {
   for(vector< Ressource*>::iterator it=tab.begin(); it!=tab.end(); ++it)
    delete (*it);
    tab.clear();
 Ressource * O;
 responsable=A.responsable;
 for(vector< Ressource*>::const_iterator it=A.tab.begin(); it!=A.tab.end(); ++it)
    {
        if (typeid(*(*it))==typeid(Ressource))
         O=new Ressource(*(*it))   ;
        if (typeid(*(*it))==typeid(Cours))
         O=new Cours(static_cast<const Cours &>(*(*it)))   ;
        if (typeid(*(*it))==typeid(Exercice))
         O=new Exercice(static_cast<const Exercice &>(*(*it)))   ;
          tab.push_back(O);
    }
}}
//*****************************************
//*****************************************
//méthode supplementaire
//******************************************
//******************************************
void Site :: afficher()
{
    vector <Ressource *> :: iterator it ;
    for(it=tab.begin();it!=tab.end();++it)
    {
        (*it)->afficher();
    }
}
