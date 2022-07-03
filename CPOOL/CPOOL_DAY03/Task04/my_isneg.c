/*
** EPITECH PROJECT, 2022
** my_isneg.c
** File description:
** Function that displays either N if the integer passed as parameter
** is negative or P, if positive or null.
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        if (my_putchar('N') == 84)
            return (84);
    } else {
        if (my_putchar('P') == 84)
            return (84);
    }
    return (0);
}
