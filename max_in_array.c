#include <stdio.h>  // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {
    int n, i, max;  // Déclaration des variables : n (taille), i (indice), max (valeur maximale)

    // Demander à l'utilisateur combien d'éléments il veut entrer
    
    scanf("%d", &n);  // Lecture de la valeur de n

    int tableau[n];  // Déclaration d'un tableau de taille n (tableau dynamique avec VLA)

    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);  // Stocker chaque entier dans le tableau
    }

    // Initialisation du maximum avec le premier élément du tableau
    max = tableau[0];
    // Parcours du tableau pour trouver le plus grand élément
    for(i = 1; i < n; i++) {
        if(tableau[i] > max) {
            max = tableau[i];  // Mise à jour du maximum si un élément plus grand est trouvé
        }
    }

    // Affichage du résultat : le maximum trouvé
    printf("Le maximum est : %d\n", max);

    return 0;  // Fin normale du programme
}
