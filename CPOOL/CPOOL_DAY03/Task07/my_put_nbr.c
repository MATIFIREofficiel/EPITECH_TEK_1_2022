/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** Function that displays the number given as a parameter.
** It must be able to display all the possible values of an int.
*/

#include <unistd.h>

int my_putchar(char c);

static int handle_max_int(int nb, int a)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        a++;
        return (a);
    }
    if (nb == 2147483647) {
        write(1, "2147483647", 10);
        a++;
        return (a);
    }
    return (a);
}

int my_put_nbr(int nb)
{
    int recup;
    int a = 0;

    a = handle_max_int(nb, a);
    if (a == 1)
        return (0);
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    if (nb > 9) {
        recup = nb % 10;
        my_put_nbr(nb = nb / 10);
        my_putchar(recup + 48);
    } else
        my_putchar(nb + 48);
    return (0);
}
