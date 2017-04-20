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
    
public:
    Noeud() ;
    Noeud(Arbre*, Arbre*) ;
    void test() ;
    std::string to_string() override;
    void gauche(Arbre*) ;
    void droite(Arbre*) ;
};

#endif /* Noeud_hpp */
