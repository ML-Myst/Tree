/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** just display the number given as parameter
*/

void my_putchar(char c);

static long get_int_length(long number)
{
    long length = 1;

    if (number < 0)
        number *= -1;
    while (number >= 10) {
        length++;
        number /= 10;
    }
    return length;
}

static long power(long nb, long power)
{
    long saved_nb = nb;

    if (power <= 0) return nb;
    for (long i = power; i > 0; i--) {
        nb = nb * saved_nb;
    }
    return nb;
}

long my_put_long_nbr(long nb)
{
    long lnb = nb;
    long nb_length = get_int_length(lnb);
    long nb_to_print = 0;

    if (nb < 0){
        my_putchar('-');
        lnb = lnb * -1;
    }
    for (long i = nb_length; i >= 1; i--) {
        if (i != 1)
            nb_to_print = lnb / power(10, i - 2);
        else
            nb_to_print = lnb;
        lnb = lnb - (nb_to_print * power(10, i - 2));
        my_putchar(nb_to_print + '0');
    }
    return (0);
}
