#include <stdio.h>

int main() {
    int n, i;
    int max, second;

    // Lecture du nombre d'éléments
    scanf("%d", &n);

    // Vérification que n est suffisant
    if(n < 2) {
        printf("Il faut au moins deux éléments.\n");
        return 1;
    }

    int tableau[n];

    // Lecture des éléments du tableau
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Initialisation des deux plus grands nombres
    if(tableau[0] > tableau[1]) {
        max = tableau[0];
        second = tableau[1];
    } else {
        max = tableau[1];
        second = tableau[0];
    }

    // Parcours du reste du tableau
    for(i = 2; i < n; i++) {
        if(tableau[i] > max) {
            second = max;       // Le précédent max devient second
            max = tableau[i];   // Nouvelle valeur max
        } else if(tableau[i] > second && tableau[i] != max) {
            second = tableau[i];  // Nouvelle valeur second si différente de max
        }
    }

    // Affichage du résultat
    printf("Le deuxième plus grand nombre est : %d\n", second);

    return 0;
}
