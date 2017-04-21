#include <iostream>
#include "Arbre.hpp"
#include "Noeud.hpp"
#include "Feuille.hpp"

using namespace std ;
int main(int a, char**v)
{
    Noeud* test =
        new Noeud("a", 1,
                            new Noeud("b", 2,
                                      new Noeud("d", 1, new Feuille(5,2), new Feuille (9, 3)),
                                      new Feuille(2,5)),
                            new Noeud("c", 2,
                                      new Feuille(3,1),
                                      new Noeud("e", 1, new Feuille(2,3), new Feuille(7,6)))
                  );
    
    cout << test->to_string() << endl;
    cout << "Zermelo : " << test->zermelo()->to_string() << endl ;
    
	return 0 ;
	
}
