/*
** EPITECH PROJECT, 2019
** get_clor
** File description:
** get a color code
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color = 0;

    color += red;
    color = color << 8;
    color += green;
    color = color << 8;
    color += blue;
    return color;
}
