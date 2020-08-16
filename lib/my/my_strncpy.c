/*
** EPITECH PROJECT, 2019
** strncpy
** File description:
** cpoy the n first characters of a string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int length = 0;

    for (int i = 0; src[i] != '\0'; i++)
        length++;
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    dest[n] = '\0';
    return (dest);
}
