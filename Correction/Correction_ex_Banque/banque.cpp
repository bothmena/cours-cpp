

#include "banque.h"
#include "compte.h"
#include <typeinfo>


Banque::Banque()
{


}

Banque::Banque(const Banque& A)
{
    Compte *p;
    for (vector<Compte*>::const_iterator it=A.tab.begin();it!=A.tab.end();++it)
    {
        if (typeid(*(*it))==typeid(Compte))
        {
            p=new Compte(*(*it));
        }
        else if (typeid(*(*it))==typeid(CompteEpargne))
        {
            p=new CompteEpargne(static_cast<const CompteEpargne&>(*(*it)));
        }
        else if (typeid(*(*it))==typeid(CompteCourant))
        {
            p=new CompteCourant(static_cast<const CompteCourant&>(*(*it)));
        }
        tab.push_back(p);
    }
}

Banque& Banque::operator=(const Banque& A)
{

    if (this != &A)
    {
        for (vector<Compte*>::iterator it=tab.begin();it!=tab.end();++it)
        {
            delete (*it);
        }
        tab.clear();
         Compte *p;
    for (vector<Compte*>::const_iterator it=A.tab.begin();it!=A.tab.end();++it)
    {
        if (typeid(*(*it))==typeid(Compte))
        {
            p=new Compte(*(*it));
        }
        else if (typeid(*(*it))==typeid(CompteEpargne))
        {
            p=new CompteEpargne(static_cast<const CompteEpargne&>(*(*it)));
        }
        else if (typeid(*(*it))==typeid(CompteCourant))
        {
            p=new CompteCourant(static_cast<const CompteCourant&>(*(*it)));
        }
        tab.push_back(p);
    }}

    return *this;
}

vector<Compte*>::iterator Banque::rechercher(long rib)
  {
      for (vector<Compte*>::iterator it=tab.begin();it!=tab.end();++it)
        {
            if((*it)->get_RIB()==rib)
                return it;
        }
   return tab.end();
  }
void Banque::ajouter(const CompteEpargne& C)
{
    Compte *p=new CompteEpargne(C);
    tab.push_back(p);
}

void Banque::ajouter(const CompteCourant& C)
{ if(rechercher(C.get_RIB())==tab.end())
  {

    Compte *p=new CompteCourant(C);
    tab.push_back(p);}
}


void Banque::ajouter(const Compte& C)
{ if(rechercher(C.get_RIB())==tab.end())
    {Compte *p=new Compte(C);
    tab.push_back(p);}
}

void Banque::afficher()
{
    for (vector<Compte*>::iterator it=tab.begin();it!=tab.end();++it)
        {
           (*it)->afficher();
        }

}

Banque::~Banque()
{
   for (vector<Compte*>::iterator it=tab.begin();it!=tab.end();++it)
        {
            delete (*it);
        }
        tab.clear();
}
