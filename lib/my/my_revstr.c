/*
** EPITECH PROJECT, 2019
** revstr
** File description:
** reverses a string
*/

char *my_revstr(char *str)
{
    char transit1 = 0;
    char transit2 = 0;
    int length = 0;

    while (str[length] != '\0')
        length++;
    for (int i = 0; i < length / 2; i++) {
        transit1 = str[i];
        transit2 = str[length - i - 1];
        str[length - i - 1] = transit1;
        str[i] = transit2;
    }
    return (str);
}
