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
#include <typeinfo>
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

// jeux
Feuille* Noeud::zermelo(int j)
{
    int jSuivant = (j == 1 ? 1 : 2) ;
    Feuille *g, *d ;
    int v1, v2 ;
    if(typeid(this->droite()) == typeid(Noeud)) {
        d = ((Noeud*)this->droite())->zermelo(jSuivant) ;
    } else {
        d = (Feuille*) (Feuille*)this->droite() ;
    }
    if(typeid(this->gauche()) == typeid(Noeud)) {
        g = ((Noeud*)this->gauche())->zermelo(jSuivant) ;
    } else {
        g = (Feuille*) (Feuille*)this->gauche() ;
    }
    if(j == 1) {
        int cmp = g->comparerGainJ1(d) ;
        // Gain à gauche moins intéressant que gains à droite. Choix droite
        if(cmp == -1) {
            v1 = d->gainJ1() ;
            V2 = d->gainJ2() ;
        } else if(cmp == 0) { // les gains sont égaux. Donc regarder le gain le moins intéressant pour J2
            if(g->comparerGainJ2(d) < 0) {
                v1 = g->gainJ1() ;
                v2 = g->gainJ2 ;
            } else {
                v1 = d->gainJ1() ;
                v2 = d->gainJ2 ;
            }
        }
        else {
            v1 = g->gainJ1()
            V2 = g->gainJ2()
        }
    } else {
    
    }
    return new Feuille(v1, v2) ;
}

Feuille* Noeud::zermelo()
{
    return this->zermelo(1) ;
}



// Convertion du Noeud en string
string Noeud::to_string()
{
    stringstream out ;
    out << typeid(this).name() << " (" << this->nom() << "-" << "J" << std::to_string(this->joueur()) << ") [ " <<
        this->_gauche->to_string() << ", " << this->_droite->to_string() << " ]" ;
    return out.str() ;
}
