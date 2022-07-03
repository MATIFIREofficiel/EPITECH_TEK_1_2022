/*
** EPITECH PROJECT, 2022
** my_print_comb.c
** File description:
** Function that displays, in ascending order, all the numbers composed
** by three different digits numbers (012, 013, 014, 015, 016, 017, 018, 019,
** 023, . . . , 789). Given three digits (all different), only the smallest
** number composed by those digits must be displayed.
*/

int my_putchar(char c);

static int display_digits(int first_digit, int second_digit, int third_digit)
{
    if (my_putchar(first_digit + 48) == 84 ||
        my_putchar(second_digit + 48) == 84 ||
        my_putchar(third_digit + 48) == 84) {
        return (84);
    }
    if (first_digit != 7) {
        if (my_putchar(',') == 84 || my_putchar(' ') == 84)
            return (84);
    }
    return (0);
}

int my_print_comb(void)
{
    int first_digit = 0;
    int second_digit = 1;
    int third_digit = 2;

    for (; third_digit <= 9; third_digit++) {
        if (display_digits(first_digit, second_digit, third_digit) == 84)
            return (84);
        if (second_digit == 8) {
            first_digit++;
            second_digit = first_digit;
        }
        if (third_digit == 9) {
            second_digit++;
            third_digit = second_digit;
        }
    }
    return (0);
}