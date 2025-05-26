#include <stdio.h>  // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {
    int n, i;         // n = nombre d'éléments, i = index de boucle
    int somme = 0;    // Initialisation de la somme à 0
    float moyenne;    // La moyenne peut être un nombre à virgule

    // Demander le nombre d'éléments à lire
    scanf("%d", &n);

    int tableau[n];   // Déclaration du tableau avec n éléments

    // Lecture des éléments du tableau
    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);    // Lecture et stockage de chaque élément
        somme += tableau[i];         // Ajout de l'élément à la somme
    }

    // Calcul de la moyenne (forcé en float pour obtenir une division réelle)
    moyenne = (float)somme / n;

    // Affichage de la moyenne
    printf("La moyenne est : %.1f\n", moyenne);

    return 0;  // Fin du programme
}
