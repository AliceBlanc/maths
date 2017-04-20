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

using namespace std ;

Noeud::Noeud()
{
    Arbre::Arbre
    super() ;
}

Noeud::Noeud(Arbre* g, Arbre* d)
{
    gauche = g ;
    groite = d ;
}

void Noeud::Test()
{
    Arbre* test = new Noeud() ;
    
    test->gauche(new Noeud(new Feuille(1,2), new Feuille(3,4))) ;
    test->droite(new Noeud(new Feuille(5,6), new Feuille(7,8))) ;
    
    cout << test.to_string() ;
}

String Noeud::to_string()
{
    String out ;
    out << "Noeud [ " << this->gauche.to_string() << ", " <<  this->droite.to_string() << " ]" ;
    return out ;
}
