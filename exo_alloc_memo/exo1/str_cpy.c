#include <stdlib.h>
#include <stdio.h>
#include "str_cpy.h"
#include <string.h>

char *str_cpy(char * str)
{
    int length = strlen(str);
    char * copy = malloc( length * sizeof(char));

    if (copy == NULL) {
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        copy[i] = str[i];
    
    }

    return copy;


}