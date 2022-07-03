/*
** EPITECH PROJECT, 2022
** my_print_digits.c
** File description:
** Function that displays all the digits,
** on a single line, in ascending order.
*/

int my_putchar(char c);

int my_print_digits(void)
{
    for (int digit = '0'; digit <= '9'; digit++) {
        if (my_putchar(digit) == 84)
            return (84);
    }
    return (0);
}
