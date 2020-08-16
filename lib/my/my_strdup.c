/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** copy a string
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * my_strlen(src));

    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}
