/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** compare to string and return their length differenc
*/

int my_strcmp(char const *s1, char const *s2)
{
    int pos = 0;

    while (s1[pos] == s2[pos] && s1[pos] != '\0') {
        pos++;
    }
    return (s1[pos] - s2[pos]);
}
