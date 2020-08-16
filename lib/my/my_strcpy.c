/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copy a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int length = 0;

    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        length++;
    }
    dest[length] = '\0';
    return (dest);
}
