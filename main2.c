#include <stdio.h>

int main() {
    int i; // Déplacer la déclaration de la variable i à l'extérieur de la boucle for
    for (i = 0; i < 100; i++) {
        printf("%d  ", i);
    }
    return 0; // Vous devez retourner une valeur dans une fonction de type int
}
