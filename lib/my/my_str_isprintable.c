/*
** EPITECH PROJECT, 2019
** isalpha
** File description:
** check if the string only contains alpha
*/

int my_str_isprintable(char const *str)
{
    int pos = 0;

    while (str[pos] != '\0') {
        if (str[pos] < 32 || str[pos] > 126)
            return (0);
        pos++;
    }
    return (1);
}
