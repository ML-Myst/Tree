/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** displays one by one each characters of a string
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr_error(char const *str)
{
    int i = 0;

    if (!str) {
        my_putstr_error("(null)");
        return 0;
    }
    while (str[i] != '\0')
        i++;
    write(2, str, i);
    return 0;
}

int my_putstr(char const *str)
{
    int i = 0;

    if (!str) {
        my_putstr("(null)");
        return 0;
    }
    while (str[i] != '\0')
        i++;
    write(1, str, i);
    return (0);
}
