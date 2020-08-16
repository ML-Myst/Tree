/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** main.c
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int sum_stdarg(int i, int n, ...)
{
    va_list ap;
    va_start(ap, n);
    int result = 0;

    if (i == 0)
        for (int y = 1; y <= n; y++)
            result += va_arg(ap, int);
        else if (i == 1) {
            for (int y = 0; y < n; y++) {
                char *tmp = va_arg(ap, char *);
                result += my_strlen(tmp);
            }
        }
    va_end(ap);
    return result;
}