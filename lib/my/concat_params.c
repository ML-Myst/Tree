/*
** EPITECH PROJECT, 2019
** my_concat params
** File description:
** concat params
*/

#include <stdlib.h>
#include "my.h"

char *concat_params(int ac, char **av)
{
    int size = 0;
    int pos = 0;
    char *concat;

    for (int i = 0; i < ac; i++) {
        size += my_strlen(av[i]);
    }
    concat = malloc((sizeof(char)) * (size + ac));
    for (int i = 0; i < ac; i++) {
        for (int y = 0; av[i][y] != '\0'; y++)
            concat[pos + y] = av[i][y];
        concat[pos + my_strlen(av[i])] = '\n';
        pos += my_strlen(av[i]) + 1;
    }
    return concat;
}
