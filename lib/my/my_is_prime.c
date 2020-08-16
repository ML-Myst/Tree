/*
** EPITECH PROJECT, 2019
** my is prime
** File description:
** check wether or not a number is prime
*/

int verify_prime(int nb, int diviser)
{
    if (nb % diviser != 0)
        return (0);
    else
        return (1);
}

int my_is_prime(int nb)
{
    int diviser = 2;
    int sucess = 0;

    while (diviser < 10) {
        sucess = 0;
        if (diviser != nb) {
            sucess = verify_prime(nb, diviser);
        }
        if (sucess == 1)
            return (0);
        diviser++;
    }
    return (1);
}
