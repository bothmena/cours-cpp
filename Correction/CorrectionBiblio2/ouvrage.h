#ifndef OUVRAGE_H_INCLUDED
#define OUVRAGE_H_INCLUDED
#include<string>

using namespace std;

class Ouvrage
{protected:

    string titre;
    string date;
    bool existence;
public:
    Ouvrage();
    Ouvrage(string,string,bool);
    virtual void afficher();
    virtual ~Ouvrage();
    string gettitre() const
    {
        return(titre);
    }
bool getexistence()
{
    return(existence);
}
void setexistence(bool ex)
{
    existence=ex;
}

};

#endif // OUVRAGE_H_INCLUDED
