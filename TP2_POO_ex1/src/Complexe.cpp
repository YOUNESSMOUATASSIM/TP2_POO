#include "Complexe.h"
#include <iostream>
#include <string>
Complexe::Complexe(float x,float y)
{
    this->re=x;
    this->im=y;
}
/* void lis();
        Complexe add(Complexe&);
        void afficher(Complexe&);*/

void Complexe::lis()
{


    std::cout<<"\n Donner le nombre complexe :\t";



}

void Complexe::afficher(Complexe c)
{
    std::cout<<"\n"<<c.re<<" +"<<c.im<<"*i\n";
}

Complexe Complexe::add(Complexe c)
{ Complexe s;

    s.im=this->im+c.im;
    s.re=this->re+c.re;

    return s;
}
