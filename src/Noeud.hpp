//
//  Noeud.hpp
//  zermelo
//
//  Created by Alice Blanc on 20/04/2017.
//  Copyright © 2017 Alice Blanc. All rights reserved.
//

#ifndef Noeud_hpp
#define Noeud_hpp

#include <stdio.h>
#include "Arbre.hpp"
#include <string>

class Noeud : public Arbre {
private :
    Arbre* _gauche ;
    Arbre* _droite ;
    std::string _nom ;
    int _joueur ;
    
public:
    // Constructeurs
    Noeud() ;
    Noeud(Arbre* g, Arbre* d) ;
    Noeud(std::string n, int j, Arbre* g, Arbre* d) ;
    // Accesseurs
    Arbre* gauche(Arbre*) ;
    Arbre* gauche() ;
    Arbre* droite(Arbre*) ;
    Arbre* droite() ;
    std::string nom() ;
    std::string nom(std::string n) ;
    int joueur() ;
    int joueur(int j) ;
    
    // Convertion de type
    std::string to_string() ;

};

#endif /* Noeud_hpp */
