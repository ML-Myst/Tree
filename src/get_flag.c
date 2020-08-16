/*
** EPITECH PROJECT, 2019
** tree
** File description:
** parse flags
*/

#include "stumper.h"

char *fill_str(char *av, char *flags, int *c)
{
    for (int i = 1; av[i] != '\0'; i++) {
        flags[*c] = av[i];
        *c = *c + 1;
    }
    return flags;
}

int count_flags(char *av)
{
    int i = 0;
    while (av[i + 1] != '\0')
        i++;
    return i;
}

char *get_flag(int ac, char **av)
{
    int c = 0;
    int count = 0;
    int n = 0;
    char *flags;
    for (int i = 0; i < ac; i++)
        if (av[i][0] == '-')
            count += count_flags(av[i]);
    flags = malloc(sizeof(char) * count +1);
    while (n < ac) {
        if (av[n][0] == '-')
            fill_str(av[n], flags, &c);
        n++;
    }
    flags[n + 1] = '\0';
    return flags;
}
