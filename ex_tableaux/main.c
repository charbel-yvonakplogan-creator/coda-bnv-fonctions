#include <stdio.h>

// Fonction qui calcule la longueur d'une chaîne
int longueur_chaine(const char *chaine) {
    int longueur = 0;

    // Tant qu'on n'arrive pas au caractère de fin '\0'
    while (chaine[longueur] != '\0') {
        longueur++; // on compte
    }

    return longueur;
}

int main(void) {
    char texte[] = "Bonjour";
    int len = longueur_chaine(texte);
    printf("La longueur de \"%s\" est %d\n", texte, len);
    return 0;
}
