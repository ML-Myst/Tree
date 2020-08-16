/*
** EPITECH PROJECT, 2019
** putnbr base
** File description:
** convert a decimal nb into a given base
*/

void my_putchar(char c);

int my_power(int nb, int p)
{
    int original = nb;

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

static int my_strlen(const char *str)
{
    int base_length = 0;

    while (str[base_length] != 0)
        base_length++;
    return base_length;
}

int my_putnbr_base(int nbr, char const *base)
{
    int to_print = 0;
    int base_length = my_strlen(base);
    int div = 0;
    int rest = nbr;

    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
        rest = rest * -1;
    }
    while (nbr >= my_power(base_length, div))
        div++;
    div--;
    while (div >= 0) {
        to_print = rest / my_power(base_length, div);
        rest = rest % my_power(base_length, div);
        my_putchar(base[to_print]);
        div--;
    }
    return 0;
}
