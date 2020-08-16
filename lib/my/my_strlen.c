/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** returns the length of a string
*/

int my_strlen(char const *str)
{
    int length = 0;

    while (str[length] != '\0'){
        length++;
    }
    return (length);
}
