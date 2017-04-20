//
//  Feuille.cpp
//  
//
//  Created by Alice Blanc on 20/04/2017.
//
//

#include "Feuille.hpp"


Feuille::Feuille(){
    
}

Feuille(int g1, int g2)
{
    this->gainJ1 = g1;
    this->gainJ2 = g2 ;
}

Feuille::getGainJ1(){
    return this.gainJ1
}

Feuille::getGainJ2(){
    return this.gainJ2
}

Feuille::comparerGainJ1(Feuille feuille){
    if (this.getGainJ1() < feuille.getGainJ1()) {
        return ("inferieur")
    } else {
        if (this.getGainJ1() > feuille?getGainJ1()) {
            return ("superieur")
        } else {
            return ("egal")
        }
    }
}

Feuille::comparerGainJ2(Feuille feuille){
    if (this.getGainJ2() < feuille.getGainJ2()) {
        return ("inferieur")
    } else {
        if (this.getGainJ2() > feuille?getGainJ2()) {
            return ("superieur")
        } else {
            return ("egal")
        }
    }
}
