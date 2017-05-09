#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED
#include"ouvrage.h"
#include<string>
using namespace std;


class Video:public Ouvrage
{
private:
    string editeur;
    float duree;
public:
    Video();
    Video(string,string,bool,string,float);
    void afficher();
    ~Video();
};

#endif // VIDEO_H_INCLUDED
