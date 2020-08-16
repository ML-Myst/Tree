/*
** EPITECH PROJECT, 2019
** Tree
** File description:
** stumper.h
*/

#ifndef STUMPER
#define STUMPER

#include "my.h"
#include <dirent.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct directory_info {
    int file_cnt;
    int dir_count;
    int deep;
    char *flags;
} info_t;

void print_directory_name(DIR *dir, info_t *info, int deep, char *parent_path);
char *get_flag(int ac, char **av);
char **get_path(int ac, char **av);

#endif
