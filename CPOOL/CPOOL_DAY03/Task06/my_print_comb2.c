/*
** EPITECH PROJECT, 2022
** my_print_comb2.c
** File description:
** Function that displays, in ascending order, all the different
** combinations of two two-digit numbers (00 01, 00 02, 00 03, 00 04,
** 00 05,. . . ,01 99, 02 03, . . . , 98 99).
*/

int my_putchar(char c);

static int display_digits(int first_digit, int second_digit, int third_digit,
int four_digit)
{
    my_putchar(first_digit + 48);
    my_putchar(second_digit + 48);
    my_putchar(' ');
    my_putchar(third_digit + 48);
    my_putchar(four_digit + 48);
    if (first_digit != 9 || second_digit != 8) {
        my_putchar(',');
        my_putchar(' ');
    }
    return (0);
}

void loop_print_comb2(int first_digit, int second_digit, int third_digit,
int four_digit)
{
    int check = -1;

    for (; four_digit <= 9; four_digit++, check = -1) {
        display_digits(first_digit, second_digit, third_digit, four_digit);
        if (four_digit == 9 && third_digit != 9) {
            third_digit++;
            four_digit = -1;
        }
        if (third_digit == 9 && four_digit == 9) {
            second_digit++;
            check = second_digit;
            second_digit = (second_digit == 10 && first_digit < 9)
            ? 0 : second_digit;
            first_digit = (check == 10 && first_digit < 9)
            ? first_digit + 1 : first_digit;
            four_digit = (second_digit == 9 && first_digit != 9)
            ? -1 : second_digit;
            third_digit = first_digit;
        }
    }
}

int my_print_comb2(void)
{
    int first_digit = 0;
    int second_digit = 0;
    int third_digit = 0;
    int four_digit = 1;

    loop_print_comb2(first_digit, second_digit, third_digit, four_digit);
    return (0);
}
