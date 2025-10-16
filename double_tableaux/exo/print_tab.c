#include <stdio.h>

int print_tab(char **tab)
{
    int i = 0;
    int j = 0;

    while(tab[i] != NULL)
    {
        j = 0;
        while(tab[i][j] != '\0')
        {
            printf("%c", tab[i][j]);
            j++;
        }
        printf("%c", '\n');
        i++;
    }
    return 0;
}