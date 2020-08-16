/*
** EPITECH PROJECT, 2019
** putnbr base
** File description:
** convert a decimal nb into a given base
*/

void my_putchar(char c);

long my_power2(long nb, long p)
{
    long original = nb;

    if (p < 0)
        return (0);
    else {
        if (p == 0)
            return (1);
        while (p - 1 > 0) {
            nb = nb * original;
            p--;
        }
        if (original > 0 && nb < original)
            return (0);
        return (nb);
    }
}

static long my_strlen(const char *str)
{
    long base_length = 0;

    while (str[base_length] != 0)
        base_length++;
    return base_length;
}

long my_putnbr_base_unsigned(long nbr, char const *base)
{
    long to_print = 0;
    long base_length = my_strlen(base);
    long div = 0;
    long rest = nbr;

    while (nbr >= my_power2(base_length, div))
        div++;
    div--;
    while (div >= 0) {
        to_print = rest / my_power2(base_length, div);
        rest = rest % my_power2(base_length, div);
        my_putchar(base[to_print]);
        div--;
    }
    return 0;
}
