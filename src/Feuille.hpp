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

class Feuille : Arbre {
    
private:
    
    int gainj1 ;
    int gainJ2 ;

public:
    
    Feuille() ;
    Feuille(int,int);
    getGainJ1();
    getGainJ2();
    comparerGainJ1(Feuille feuille) ;
    comparerGainJ2(Feuille feuille) ;
    
};
#endif /* Feuille_hpp */
