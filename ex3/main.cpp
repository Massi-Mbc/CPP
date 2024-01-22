#include "utils.hpp"

int main()
{
    print_hello();
    print_bye();
    return 0;
}

/*
Q1: j'ai principalement bloqué sur l'utilisation
des vecteurs dans l'exercice precédent et la
notions de classe en cpp.

Q2: La phase de compilation est la traduction du code source
en code machine, on obtient de ce résultat un fichier objet.
Tandis que la phrase d'édition des liens est la dernière du processus,
car elle combine tous les fichiers objets en un programme executable.

==> La compation avant l'édition des liens.

En ce qui concerne la précompilation, elle traite le code source avant la compilation.
Elle comprends le remplacement des headers, macros, suppression des commentaires,
et application des directives de préprocesseur.

Q3:
L'erreur 'a: error: 'qqchose' was not declared in this scope' signifie que le
compilateur n'a pas pu trouver la déclaration d'une variable,fonction ou autre
identificateur nommé 'qqchose'.

L'erreur 'b: error: 'qqchose' is not a member of 'std'' signifie que le compilateur
ne reconnait pas le nom "qqchose" comme membre de l'espaces des nom stardard (dans std)
Elle apparait donc quand on tente d'accéder à quelque chose qui n'est pas défini
dans l'espaces des noms.

L'instruction préprocesseur '#include' est utilisée pour inclure le contenu
d'un fichier d'en tête dans le code source.
L'ajout de l'en tête résoud donc les problèmes lié à la déclaration,
à la définition d'élément etc.

Q4: g++ main.cpp -Wall -Werror -o erreur
/usr/bin/ld : /tmp/ccG16LUb.o : dans la fonction « main » :
main.cpp:(.text+0x5) : référence indéfinie vers « print_hello() »
collect2: error: ld returned 1 exit status

On nous affiche une référence indéfinie vers 'print_hello()' dans le main.
Celle-ci est différente des autres type d'erreur, car elle apparait lors
de l'édition des liens.
Elle signifie exactement que le compilateur ne peut pas trouver l'implementation
de cette fonction.

Q5: g++ main.cpp utils.cpp -Wall -Werror -o erreur
/usr/bin/ld : /tmp/cc8EY4eV.o : dans la fonction « print_bye() » :
utils.cpp:(.text+0x0) : définitions multiples de « print_bye() »; /tmp/ccHo0PnY.o:main.cpp:(.text+0x0) : défini pour la première fois ici
collect2: error: ld returned 1 exit status

On a une erreur de 'définie multiple', il s'agit d'une erreur qui
intervient dans l'édition des liens.
Cette erreur se produit lorsque l'on a une définition multiple
d'une en tête (dans un include) par exemple.
Pour la résoudre, et pour les eviters, on pourrait utiliser des

En particulier, cette erreur est du au fait que la fonction print_bye
est plutôt mal définie car elle est déclarer dans le fichier 'hpp', au lieu de 'cpp'.
Donc de ne pas faire de definition (uniquement declaration) dans le hpp.

Q6: On constate que le programme fonctionne.
L'effet du mot clé 'inline' indique au compilateur que la fonction
ciblé peut-être définie dans plusieurs fichiers sources.
Et lors de l'édition des liens, cela permet de fusionner les définitions
de manière à éviter les erreurs de définition multiple.
*/