/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** concatenates two strings (only the first n bytes of the source)
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int dest_length = my_strlen(dest);

    for (int i = 0; i < n; i++) {
        dest[dest_length + i] = src[i];
    }
    dest[dest_length + n] = '\0';
    return (dest);
}
