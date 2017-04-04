//
// Created by bothmena on 15/03/17.
//

#ifndef CPLUSPLUS_ARTICLE_H
#define CPLUSPLUS_ARTICLE_H

using namespace std;

class Article {

    private:
    string nom;
    double prix;

    public:
    void afficher();
    void setPrix( double );
    double getPrix() const ;
    string getNom() const ;
    void ~Article();

};


#endif //CPLUSPLUS_ARTICLE_H
