#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Lecture du nombre d'éléments
    scanf("%d", &n);

    int tableau[n];  // Déclaration du tableau

    // Lecture des éléments
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Tri à bulles : parcours du tableau à plusieurs reprises
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(tableau[j] > tableau[j + 1]) {
                // Échange des éléments s'ils sont dans le mauvais ordre
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié : ");
    for(i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
