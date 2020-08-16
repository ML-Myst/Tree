/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** flags.c
*/

#include "my.h"
#include <stdarg.h>

static void my_putptr(void *ptr) {
    long nb = (long)ptr;
    my_putstr("0x");
    my_putnbr_base_unsigned(nb, "0123456789abcdef");
}

static void do_the_zero_thing(char *flags, int len, va_list list)
{
    char cpy[len + 1];
    int padding;
    int nb = va_arg(list, int);
    int nb_len = get_int_length2(nb);

    my_strncpy(cpy, flags + 1, len);
    padding = my_getnbr(cpy);
    for (int i = 0; i < padding - nb_len; i++) {
        my_putchar('0');
    }
    my_put_nbr(nb);
}

void check_flags3(char *flags, va_list list, int pos) {
    void *ptr;

    if (flags[pos] == 'X')
        my_putnbr_base_unsigned(va_arg(list, unsigned int), "0123456789ABCDEF");
    if (flags[pos] == 'p') {
        ptr = va_arg(list, void *);
        my_putptr(ptr);
    }
    if (flags[pos] == '#') {
        if (flags[my_strlen(flags) - 1] == 'x')
            my_putstr("0x");
        if (flags[my_strlen(flags) - 1] == 'X')
            my_putstr("0X");
    }

}

void check_flags2(char *flags, va_list list, int *pos)
{
    int len = 0;

    check_flags3(flags, list, *pos);
    if (flags[*pos] == '0') {
        (*pos)++;
        while (flags[*pos] >= '0' && flags[*pos] <= '9') {
            len++;
            (*pos)++;
        }
        *pos++;
        do_the_zero_thing(flags, len, list);
    }
}

int check_flags(char *flags, va_list list, int i)
{
    for (int pos = 0; pos < my_strlen(flags); pos++) {
        if (flags[pos] == 'S')
            my_put_string_non_printable(va_arg(list, char *));
        if (flags[pos] == 'd' || flags[pos] == 'i')
            my_put_nbr(va_arg(list, int));
        if (flags[pos] == 'u')
            my_put_nbr_unsigned(va_arg(list, unsigned int));
        if (flags[pos] == 'x')
            my_putnbr_base(va_arg(list, int), "0123456789abcdef");
        if (flags[pos] == 'o')
            my_putnbr_base_unsigned(va_arg(list, unsigned int), "01234567");
        if (flags[pos] == 's')
            my_putstr(va_arg(list, char *));
        if (flags[pos] == 'b')
            my_putnbr_base_unsigned(va_arg(list, unsigned int), "01");
        if (flags[pos] == '%')
            my_putchar('%');
        check_flags2(flags, list, &pos);
    }
    return i + my_strlen(flags);
}