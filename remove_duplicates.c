#include <stdio.h>

int main() {
    int n, i, j, k;
    
    // Lecture du nombre d'éléments
    scanf("%d", &n);

    int tableau[n];  // Tableau initial
    int unique[n];   // Tableau pour stocker les éléments sans doublon
    int taille_unique = 0;

    // Lecture des éléments du tableau
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Parcours du tableau pour supprimer les doublons
    for(i = 0; i < n; i++) {
        int est_doublon = 0;

        // Comparer avec les éléments déjà dans le tableau unique
        for(j = 0; j < taille_unique; j++) {
            if(tableau[i] == unique[j]) {
                est_doublon = 1;  // Doublon trouvé
                break;
            }
        }

        // Si ce n’est pas un doublon, on l’ajoute au tableau unique
        if(!est_doublon) {
            unique[taille_unique] = tableau[i];
            taille_unique++;
        }
    }

    // Affichage du tableau sans doublons
    printf("Après suppression des doublons : ");
    for(i = 0; i < taille_unique; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
