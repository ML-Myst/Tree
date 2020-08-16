/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** check if a string contains only digits
*/

int my_str_isnum_noline(char const *str)
{
    int pos = 0;

    while (str[pos] != '\0' && str[pos] != '\n') {
        if ((str[pos] < '0' || str[pos] > '9'))
            return (0);
        pos++;
    }
    return (1);
}

int my_str_isnum(char const *str)
{
    int pos = 0;

    while (str[pos] != '\0') {
        if ((str[pos] < '0' || str[pos] > '9'))
            return (0);
        pos++;
    }
    return (1);
}
