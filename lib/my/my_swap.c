/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swaps the content of two int
*/

void my_swap(int *a, int *b)
{
    int a_value = *a;
    int b_value = *b;

    *b = a_value;
    *a = b_value;
}
