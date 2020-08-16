/*
** EPITECH PROJECT, 2019
** my compute square root
** File description:
** returns the quare root of a number
*/

int my_compute_square_root(int nb)
{
    int root = 0;

    while ((root * root) != nb) {
        if (root > 46340)
            return (0);
        root++;
    }
    return root;
}
