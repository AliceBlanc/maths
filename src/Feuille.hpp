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
    
    int gainJ1 ;
    int gainJ2 ;

public:
    
    Feuille() ;
    Feuille(int,int);
    int getGainJ1();
    int getGainJ2();
    int comparerGainJ1(Feuille feuille) ;
    int comparerGainJ2(Feuille feuille) ;
    std::string to_string() override ;
};
#endif /* Feuille_hpp */
