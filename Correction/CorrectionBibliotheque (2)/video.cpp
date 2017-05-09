#include"video.h"
#include <iostream>

using namespace std;

Video::Video():Ouvrage()
{
     editeur="";
    duree=0;
}
Video::Video(string a,string b,bool c,string d,float e):Ouvrage(a,b,c)
{
     editeur=d;
    duree=e;
}

void Video::afficher()
{
    Ouvrage::afficher();
    cout<<" l'editeur est "<<editeur<<" la duree est "<<duree<<endl;
}

Video::~Video()
{

}
