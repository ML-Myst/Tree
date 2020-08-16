/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my.h
*/

/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my_slib prototypes
*/

#include <stdarg.h>

void my_put_string_non_printable(char *str);
void my_putchar(char c );
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_in_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_quare_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *str);
char *concat_params(int argc, char **argv);
int my_show_word_array(char * const *tab);
int ten(int nb, int power);
int my_compute_square_root(int nb);
int validate_character(char c, int nb);
int verify_prime(int nb, int diviser);
int verify_and_assign(char const *str, int len);
int my_power(int nb, int p);
int my_putnbr_base(int nbr, char const *base);
void boucle(int *array, int size);
int my_putnbr_count(int nbr, char const *base);
void my_sort_int_array(int *array, int size);
int myisalphanum(char c);
char *test_and_up(char *str, int i);
char *test_and_low(char *str, int i);
int my_sizeof2(char const *str);
char *verify_next(char *str, char const *to_find, int pos_to_check);
int get_color(unsigned char red, unsigned char green, unsigned char blue);
int swap_endian_color(int color);
struct info_param *params(int length, char *str, char *copy);
int my_put_nbr_unsigned(unsigned int nb);
unsigned int my_putnbr_base_unsigned(unsigned int nbr, char const *base);
int check_flags(char *flags, va_list list, int i);
int my_printf(char *str, ...);
int get_int_length2(long number);
long my_put_long_nbr(long nb);
int str_contain(char *str_to_check, char char_to_find);
char *my_strcat_malloc(char *dest, char const *src);