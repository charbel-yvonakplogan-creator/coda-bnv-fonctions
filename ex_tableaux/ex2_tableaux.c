#include <stdio.h>
#include <string.h> // contient la fonction strcmp

int comparer_chaines(const char *chaine1, const char *chaine2) {
    // strcmp retourne :
    // 0  → si les chaînes sont identiques
    // <0 → si chaine1 < chaine2 (ordre lexicographique)
    // >0 → si chaine1 > chaine2

    if (strcmp(chaine1, chaine2) == 0)
        return 1; // identiques
    else
        return 0; // différentes
}

int main(void) {
    char mot1[] = "Bonjour";
    char mot2[] = "Bonjour";
    char mot3[] = "Salut";

    printf("Comparaison mot1/mot2 : %d\n", comparer_chaines(mot1, mot2)); // → 1
    printf
}