//
//  Feuille.cpp
//  
//
//  Created by Alice Blanc on 20/04/2017.
//
//

#include "Feuille.hpp"
#include <string>

using namespace std ;


Feuille::Feuille()
{    
}

Feuille::Feuille(int g1, int g2)
{
    this->gainJ1 = g1;
    this->gainJ2 = g2 ;
}

int Feuille::getGainJ1(){
    return this->gainJ1 ;
}

int Feuille::getGainJ2(){
    return this->gainJ2 ;
}

int Feuille::comparerGainJ1(Feuille feuille){
    if (this->getGainJ1() < feuille.getGainJ1()) {
        return -1 ;
    } else {
        if (this->getGainJ1() > feuille.getGainJ1()) {
            return 1 ;
        } else {
            return 0 ;
        }
    }
}

int Feuille::comparerGainJ2(Feuille feuille){
    if (this->getGainJ2() < feuille.getGainJ2()) {
        return -1 ;
    } else {
        if (this->getGainJ2() > feuille.getGainJ2()) {
            return 1 ;
        } else {
            return 0 ;
        }
    }
}

string Feuille::to_string()
{
    string out ;
    out.append("coucou") ;
    //   out << "(" << this->getGainJ1() << "," << this->getGainJ2() << ")" ;
    return out ;
    
}
