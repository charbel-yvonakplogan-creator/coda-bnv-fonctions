#include <stdio.h>
#include <string.h>  // pour strlen()

void str_rev(char *str) {
    int longueur = strlen(str);

    // On part de la fin (longueur - 1) jusqu’au début (0)
    for (int i = longueur - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n"); // retour à la ligne à la fin
}

int main(void) {
    char mot[] = "Bonjour";
    printf("Chaîne originale : %s\n", mot);
    printf("Chaîne inversée  : ");
    str_rev(mot);
    return 0;
}
