//
//  Arbre.cpp
//  
//
//  Created by Alice Blanc on 20/04/2017.
//
//

#include "Arbre.hpp"
#import <string>

using namespace std ;

Arbre::Arbre()
{
    this->_parent = (Arbre*) 0 ;
}

Arbre::Arbre(Arbre* p)
{
    this->_parent = p ;
}

// Gestion du lien vers l'arbre parent.
Arbre* Arbre::parent()
{
    return this->_parent ;
}

Arbre* Arbre::parent(Arbre* p)
{
    this->_parent = p ;
    return this->_parent ;
}
