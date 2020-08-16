/*
** EPITECH PROJECT, 2019
** str to word array
** File description:
** transform str to word array
*/

#include "my.h"
#include <stdlib.h>

int my_isalphanum(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

int my_str_number(char const *str)
{
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_isalphanum(str[i]) == 0 && my_isalphanum(str[i - 1]) == 1)
            counter++;
    }
    if (my_isalphanum(str[my_strlen(str)]))
        counter++;
    return counter + 1;
}

int my_str_len(char const *str, int *pos)
{
    int counter = 0;

    while (my_isalphanum(str[*pos]) == 0)
        (*pos)++;
    for (int y = *pos; my_isalphanum(str[y]) == 0; y++) {
        counter++;
    }
    counter++;
    return counter;
}

char **my_str_to_word_array(char const *str)
{
    int nb_word = my_str_number(str);
    char **array = malloc((sizeof(char *)) * nb_word + 1);
    int pos = 0;
    int *pos_ptr = &pos;
    int pos_array = 0;

    for (int i = 0; i < nb_word; i++) {
        array[i] = malloc(sizeof(char) * my_str_len(str, pos_ptr) + 1);
        pos_array = 0;
        while (my_isalphanum(str[pos]) == 1) {
            array[i][pos_array] = str[pos];
            pos++;
            pos_array++;
        }
        if (pos > my_strlen(str))
            return array;
    }
    return array;
}
