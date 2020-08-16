/*
** EPITECH PROJECT, 2019
** my_showstr
** File description:
** print a string and replacing the non-printable
** by their hex values
*/

void my_putchar(char c);

int my_putnbr_base(int nbr, char const *base);

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            my_putnbr_base(str[i], "0123456789abcdef");
        } else
            my_putchar(str[i]);
    }
    return 0;
}
