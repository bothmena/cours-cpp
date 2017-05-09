#ifndef RESSOURCE_H
#define RESSOURCE_H
#include <iostream>

using namespace std;
class Ressource
{
    protected:
        int id;
        string date;
        string domain;
    public:
        Ressource();
        Ressource(int ,string ,string );
        virtual ~Ressource();

        int Getid() const{ return id; }
        void Setid(int val) { id = val; }
        string Getdate() { return date; }
        void Setdate(string val) { date = val; }
        string Getdomain() { return domain; }
        void Setdomain(string val) { domain = val; }

        virtual void afficher();
        friend ostream& operator<<(ostream&,const Ressource&);
};

#endif // RESSOURCE_H
