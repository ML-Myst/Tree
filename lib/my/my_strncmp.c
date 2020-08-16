/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** compare to string and return their length differenc
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int pos = 0;

    while (s1[pos] == s2[pos] && pos < n - 1 && s1[pos] != 0) {
        pos++;
    }
    return (s1[pos] - s2[pos]);
}
