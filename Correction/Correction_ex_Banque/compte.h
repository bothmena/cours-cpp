

#ifndef COMPTE_H_
#define COMPTE_H_

#include<string>
#include<iostream>

using namespace std;


class Compte
{

  protected:
    long RIB;
    double solde;

  public:
      Compte();
    Compte(long ,double );
    virtual ~Compte();
    void deposer(double);

    long get_RIB()const {return RIB;}
    virtual bool retirer(double);
    virtual void afficher();


};


#endif /* COMPTE_H_ */
