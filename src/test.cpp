#include <iostream>
#include "Arbre.hpp"
#include "Noeud.hpp"
#include "Feuille.hpp"

using namespace std ;
int main(int a, char**v)
{
    Noeud* test = new Noeud("a", 1,
                            new Noeud("b", 2, new Feuille(1,9),
                                      new Noeud("c", 1, new Feuille(6,4), new Feuille (1, 2))),
                            new Noeud("d", 2, new Feuille(5,6), new Feuille(7,8))) ;
    
    cout << test->to_string() << endl;
    cout << "Zermelo : " << test->zermelo()->to_string() << endl ;
    
	return 0 ;
	
}
