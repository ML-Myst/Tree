/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** return the given power of the given number
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    else{
        if (p > 0)
            result = my_compute_power_rec(nb, p - 2);
        if ((result * nb) <= result)
            return (0);
        return nb * result;
    }
}
