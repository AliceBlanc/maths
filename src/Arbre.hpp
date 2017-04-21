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

class Feuille ;

class Arbre {
    // un arbre a un arbre parent. Si celui ci est null, alors c'est la racine.
private:
    Arbre* _parent ;
protected:
    Arbre () ;
    Arbre (Arbre* p) ;
public:
    virtual std::string to_string() = 0 ;
    Arbre* parent() ;
    Arbre* parent(Arbre* p) ;
    virtual Feuille* zermelo(int j) = 0 ;
};

#endif /* Arbre_hpp */
