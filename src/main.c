/*
** EPITECH PROJECT, 2019
** canvas
** File description:
** main.c
*/

#include "stumper.h"

int main(int ac, char *av[])
{
    DIR *directory;
    info_t info = {0, 0, 0, get_flag(ac, av)};
    char **paths = get_path(ac, av);

    if (ac == 1)
        paths[0] = ".";
    for (int i = 0; paths[i]; i++) {
        my_printf("%s\n", paths[i]);
        directory = opendir(paths[i]);
        print_directory_name(directory, &info, 0, paths[i]);
    }
    return 0;
}
