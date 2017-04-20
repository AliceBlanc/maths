//
//  Noeud.cpp
//  zermelo
//
//  Created by Alice Blanc on 20/04/2017.
//  Copyright © 2017 Alice Blanc. All rights reserved.
//

#include <iostream>
#include <string>
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


void Noeud::test()
{
    Arbre* test = new Noeud(
        new Noeud(new Feuille(1,2), new Feuille(3,4)),
        new Noeud(new Feuille(5,6), new Feuille(7,8))) ;
    
    cout << test->to_string() ;
}

string Noeud::to_string()
{
    string out ;
    //out << "Noeud [ " << this->gauche.to_string() << ", " <<  this->droite.to_string() << " ]" ;
    return out ;
}
