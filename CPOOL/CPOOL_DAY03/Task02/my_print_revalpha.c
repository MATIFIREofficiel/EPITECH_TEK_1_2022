/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** Function beginning with z that displays the
** lowercase alphabet in descending order, on a single.
*/

int my_putchar(char c);

int my_print_revalpha(void)
{
    for (int letter = 'z'; letter >= 'a'; letter--) {
        if (my_putchar(letter) == 84)
            return (84);
    }
    return (0);
}
