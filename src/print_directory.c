/*
** EPITECH PROJECT, 2019
** Tree
** File description:
** des mots
*/

#include "stumper.h"

static int is_last(struct dirent *next_dir, info_t *info)
{
    if (next_dir)
        return 0;
    return 1;
}

void print_spaces(int deep)
{
    int nb = 3;

    if (deep == 2) {
        nb += 4;
    } else
        nb += (deep - 1) * 3;
    for (int i = 0; i < nb; i++)
        my_putchar(' ');
}

char *ret_name(char *full, char *name, info_t *info)
{
    if (str_contain(info->flags, 'f'))
	return full;
    return name;
}

void print_directory_name(DIR *dir, info_t *info, int deep, char *parent_path)
{
    struct dirent *dir_r = readdir(dir);
    struct dirent *next_dir_r = readdir(dir);
    DIR *deeper_dir;
    char *full_path;

    while (dir_r) {
        full_path = my_strcat_malloc(parent_path, "/");
        full_path = my_strcat_malloc(full_path, dir_r->d_name);
        if (str_contain(info->flags, 'a') == 0 && dir_r->d_name[0] == '.') {
            dir_r = next_dir_r;
            next_dir_r = readdir(dir);
            continue;
        }
        print_spaces(deep);
        if (is_last(next_dir_r, info))
	    my_printf("`-- %s\n", ret_name(full_path, dir_r->d_name, info));
        else
            my_printf("|-- %s\n", ret_name(full_path, dir_r->d_name, info));
        if (dir_r->d_type == DT_DIR && dir_r->d_name[0] != '.') {
            deeper_dir = opendir(full_path);
            print_directory_name(deeper_dir, info, deep + 1, full_path);
        }
        dir_r = next_dir_r;
        next_dir_r = readdir(dir);
    }
}
