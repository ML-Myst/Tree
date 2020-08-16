/*
** EPITECH PROJECT, 2019
** my_prime_sup
** File description:
** return the smallest prime number
*/

int my_find_prime_sup(int nb)
{
    int sucess = 0;

    if (nb == 1 || nb == 0)
        return (2);
    for (int i = 2; i < 10; i++) {
        if (nb % i == 0)
            sucess = 1;
    }
    if (sucess == 0) {
        return nb;
    }
    nb = my_find_prime_sup(nb + 1);
    return 0;
}
