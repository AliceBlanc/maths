//
//  Noeud.cpp
//  zermelo
//
//  Created by Alice Blanc on 20/04/2017.
//  Copyright © 2017 Alice Blanc. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "Noeud.hpp"
#include "Feuille.hpp"

using namespace std ;

Noeud::Noeud()
{
    //    Arbre::Arbre
    //    super() ;
}

Noeud::Noeud(Arbre* g, Arbre* d)
{
    this->_gauche = g ;
    this->_droite = d ;
}


void Noeud::gauche(Arbre* g)
{
    this->_gauche = g ;
}

void Noeud::droite(Arbre* d)
{
    this->_droite = d ;
}



string Noeud::to_string()
{
    stringstream out ;
    out << "Noeud [ " << this->_gauche->to_string() << ", " << this->_droite->to_string() << " ]" ;
    return out.str() ;
}
