#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
// Scores en variables globales : nécessaire pour que afficher_bilan
// puisse être une procédure sans paramètre.
int scoreJoueur = 0;
int scoreOrdi = 0;
 
// Étape 2 - Procédure sans paramètre
void afficher_bilan()
{
    printf("=== FIN DE LA PARTIE ===\n");
    printf("Score final -> Vous : %d | Ordi : %d\n", scoreJoueur, scoreOrdi);
    if (scoreJoueur > scoreOrdi)
    {
        printf("Bravo, vous avez gagné la partie !\n");
    }
    else if (scoreOrdi > scoreJoueur)
    {
        printf("L'ordinateur remporte la partie...\n");
    }
    else
    {
        printf("Match nul parfait !\n");
    }
}ss
 
