# Zermelo

## Equilibre parfait en sous-jeux et algorithme de Zermelo

Un équilibre parfait en sous-jeux est un équilibre de Nash qui mène encore à un équilibre par restriction à tout sous-jeu. Il existe toujours au moins un équilibre parfait en sous-jeux et cet équilibre est unique lorsque les gains de chaque joueur sont tous distincts.
L’algorithme de Zermelo (ou algorithme d’induction à rebours) permet de trouver l’équilibre parfait en sous jeu. Le principe est de partir d’un nœud précédant un nœud terminal et de remonter petit à petit dans l’arbre, à chaque choix à faire, il faudra prendre le choix permettant au joueur faisant le choix de gagner le gain maximal. Les nœuds sont alors remplacés par les gains choisis. A la fin, l’équilibre parfait du jeu est obtenu.
