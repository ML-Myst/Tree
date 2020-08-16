/*
** EPITECH PROJECT, 2019
** str_contain
** File description:
** return 1 if str contain the specified char else return 0
*/

int str_contain(char *str_to_check, char char_to_find)
{
    for (int i = 0; str_to_check[i] != '\0'; i++) {
        if (str_to_check[i] == char_to_find)
            return 1;
    }
    return 0;
}