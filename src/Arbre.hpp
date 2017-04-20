//
//  Arbre.hpp
//  classe mère de la feuille et du noeud
//
//  Created by Alice Blanc on 20/04/2017.
//
//

#ifndef Arbre_hpp
#define Arbre_hpp

#include <stdio.h>
#include <string>

class Arbre {
public:
    virtual std::string to_string() = 0 ;
};

#endif /* Arbre_hpp */
