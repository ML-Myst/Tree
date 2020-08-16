/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** display the content of an array of word
*/

#include "my.h"
#include <stdlib.h>

int my_show_word_array(char * const *tab)
{
    int tab_size = 0;
    char **concat;
    int size = 0;

    for (int i = 0; tab[i] != 0; i++) {
        tab_size++;
        size += my_strlen(tab[i]);
    }
    concat = malloc((sizeof(char *)) * (size + tab_size));
    for (int i = 0; tab[i] != 0; i++) {
        for (int y = 0; tab[i][y] != 0; y++) {
            concat[i] = tab[i];
        }
    }
    my_putstr(concat_params(tab_size, concat));
    return 0;
}
