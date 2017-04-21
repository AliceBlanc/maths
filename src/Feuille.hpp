//
//  Feuille.hpp
//  
//
//  Created by Alice Blanc on 20/04/2017.
//
//

#ifndef Feuille_hpp
#define Feuille_hpp

#include <stdio.h>
#include "Arbre.hpp"
#include <string>


class Feuille : public Arbre {
    
private:
    
    int _gainJ1 ;
    int _gainJ2 ;

public:
    
    Feuille() ;
    Feuille(Feuille* f) ;

    Feuille(int g1, int g2);
    int gainJ1();
    int gainJ2() ;
    int gainJ1(int g);
    int gainJ2(int g) ;
    int comparerGainJ1(Feuille* feuille) ;
    int comparerGainJ2(Feuille* feuille) ;
    std::string to_string() ;
};

#endif /* Feuille_hpp */
