/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

char *get_flags(char *str, int i)
{
    char *flags = malloc(sizeof(char) * my_strlen(str) + 1);
    int pos = 0;

    if (str[i] != '%')
        return "";
    while (str[i] > ' ') {
        if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            flags[pos] = str[i + 1];
        if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
            flags[pos] = str[i + 1];
        if (str[i + 1] >= '0' && str[i + 1] <= '9')
            flags[pos] = str[i + 1];
        if (str[i + 1] == '%' || str[i + 1] == '0' || str[i + 1] == '#')
            flags[pos] = str[i + 1];
        pos++;
        i++;
    }
    flags[pos] = '\0';
    return flags;
}

static int count_non_printable(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 32 || str[i] >= 127) {
            count++;
        }
    }
    return count;
}

void my_put_string_non_printable(char *str)
{
    int malloc_size = count_non_printable(str) * 3 + my_strlen(str);
    int tmp;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 32 || str[i] >= 127) {
            tmp = str[i];
            my_putchar('\\');
            my_putnbr_base(tmp, "01234567");
        }
        else {
            my_putchar(str[i]);
        }
    }
}

static void read_expr(char * str, va_list list)
{
    char *flags;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            flags = get_flags(str, i);
            i = check_flags(flags, list, i);
            free(flags);
        } else {
            my_putchar(str[i]);
        }
    }
}

int my_printf(char *str, ...)
{
    va_list ap;
    int nb_flags = 0;
    va_start(ap, str);
    read_expr(str, ap);
    va_end(ap);
    return 0;
}