//
//  Feuille.cpp
//  
//
//  Created by Alice Blanc on 20/04/2017.
//
//

#include "Feuille.hpp"
#include <string>
#include <sstream>

using namespace std ;


Feuille::Feuille() : Arbre()
{
}

Feuille::Feuille(int g1, int g2)
{
    this->_gainJ1 = g1;
    this->_gainJ2 = g2 ;
}

int Feuille::gainJ1(){
    return this->_gainJ1 ;
}

int Feuille::gainJ1(int g)
{
    this->_gainJ1 = g ;
    return this->_gainJ1 ;
}

int Feuille::gainJ2(int g)
{
    this->_gainJ2 = g ;
    return this->_gainJ2 ;
}

int Feuille::gainJ2(){
    return this->_gainJ2 ;
}

int Feuille::comparerGainJ1(Feuille* feuille){
    if (this->gainJ1() < feuille->gainJ1()) {
        return -1 ;
    } else {
        if (this->gainJ1() > feuille->gainJ1()) {
            return 1 ;
        } else {
            return 0 ;
        }
    }
}

int Feuille::comparerGainJ2(Feuille* feuille){
    if (this->gainJ2() < feuille->gainJ2()) {
        return -1 ;
    } else {
        if (this->gainJ2() > feuille->gainJ2()) {
            return 1 ;
        } else {
            return 0 ;
        }
    }
}

string Feuille::to_string()
{
    stringstream out ;
    out << "Feuille ( " << this->gainJ1() << ", " << this->gainJ2() << " )" ;

    return out.str() ;
    
}
