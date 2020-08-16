/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** parse a char into an int
*/

int ten(int nb, int power)
{
    for (int i = 1; i <= power; i++) {
        nb = nb * 10;
    }
    return nb;
}

int validate_character(char c, int nb)
{
    if (c == '+')
        return (nb);
    else
        return (0);
}

int verify_and_assign(char const *str, int len)
{
    int nb = 0;
    int reducer = 0;

    for (int i = 0; i < len; i++){
        if (str[len - i - 1] >= '0' && str[len - i - 1] <= '9')
            nb += ten(str[len - i - 1] - '0', i - reducer);
        else if (str[len - i - 1] == '-')
            nb *= -1;
        else{
            nb = validate_character(str[len - i - 1], nb);
            reducer = i + 1;
        }
    }
    return (nb);
}

int my_getnbr(char const *str)
{
    int to_return = 0;
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    to_return = verify_and_assign(str, len);
    if (to_return > 2147483647 || to_return <= -2147483648)
        return (0);
    return (to_return);
}
