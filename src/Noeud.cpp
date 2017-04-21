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

Noeud::Noeud() : Arbre()
{
    //    Arbre::Arbre
    //    super() ;
}

Noeud::Noeud(Arbre* g, Arbre* d) : Arbre ()
{
    this->gauche(g) ;
    this->droite(d) ;
}

Noeud::Noeud(string n, int j, Arbre* g, Arbre* d) : Arbre ()
{
    this->gauche(g) ;
    this->droite(d) ;
    this->nom(n) ;
    this->joueur(j) ;
}


// Accesseurs aux fils gauche et droite.
Arbre* Noeud::gauche(Arbre* g)
{
    this->_gauche = g ;
    this->_gauche->parent(this) ;
    return this->_gauche ;
}

Arbre* Noeud::gauche()
{
    return this->_gauche ;
}

Arbre* Noeud::droite(Arbre* d)
{
    this->_droite = d ;
    this->_droite->parent(this) ;
    return this->_droite ;
}

Arbre* Noeud::droite()
{
    return this->_droite ;
}

string Noeud::nom(string n)
{
    this->_nom = n ;
    return this->_nom ;
}

string Noeud::nom()
{
    return this->_nom ;
}

int Noeud::joueur(int j)
{
    this->_joueur = j ;
    return this->_joueur ;
}

int Noeud::joueur()
{
    return this->_joueur ;
}



// Convertion du Noeud en string
string Noeud::to_string()
{
    stringstream out ;
    out << "Noeud (" << this->nom() << "-" << "J" << std::to_string(this->joueur()) << ") [ " <<
        this->_gauche->to_string() << ", " << this->_droite->to_string() << " ]" ;
    return out.str() ;
}
