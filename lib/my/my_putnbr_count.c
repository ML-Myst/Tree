/*
** EPITECH PROJECT, 2019
** putnbr base
** File description:
** convert a decimal nb into a given base
*/

void my_putchar(char c);

int my_power(int nb, int p);

int my_strlen(const char *str);

int my_putnbr_count(int nbr, char const *base)
{
    int base_length = my_strlen(base);
    int div = 0;
    int rest = nbr;
    int counter = 0;

    if (nbr < 0) {
        nbr = nbr * -1;
        rest = rest * -1;
    }
    while (nbr > my_power(base_length, div))
        div++;
    div--;
    while (div >= 0) {
        counter++;
        div--;
    }
    return counter;
}
