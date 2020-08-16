/*
** EPITECH PROJECT, 2019
** tree
** File description:
** get all path
*/

#include "stumper.h"

char **get_path(int ac, char **av)
{
    int count = 0;
    int n = 1;
    int p = 0;
    char **path;
    for (int i = 1; i < ac; i++)
        if (av[i][0] != '-')
            count += 1;
    path = malloc(sizeof(char *) * (count + 1));
    while (n < ac) {
        if (av[n][0] != '-') {
            path[p] = av[n];
            p++;
        }
        n++;
    }
    path[p] = NULL;
    return path;
}
