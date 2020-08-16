/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenates two strings
*/

#include "my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int dest_length = my_strlen(dest);
    int total_len = 0;

    for (int i = 0; src[i] != '\0'; i++) {
        dest[dest_length + i] = src[i];
        total_len++;
    }
    dest[dest_length + total_len] = '\0';
    return (dest);
}

char *my_strcat_malloc(char *dest, char const *src)
{
    int dest_length = my_strlen(dest);
    int src_length = my_strlen(src);
    char *dest_cat = malloc(sizeof(char) * (dest_length + src_length) + 1);
    int total_len = 0;

    for (int i = 0; dest[i] != '\0'; i++) {
        dest_cat[i] = dest[i];
    }
    for (int i = 0; src[i] != '\0'; i++) {
        dest_cat[dest_length + i] = src[i];
        total_len++;
    }
    dest_cat[dest_length + total_len] = '\0';
    return (dest_cat);
}
