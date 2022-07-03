/*
** EPITECH PROJECT, 2022
** my_print_alpha.c
** File description:
** Function beginning with a that display the lowercase alphabet
** in ascending order, on a single line.
*/

int my_putchar(char c);

int my_print_alpha(void)
{
    for (int letter = 'a'; letter <= 'z'; letter++) {
        if (my_putchar(letter) == 84)
            return (84);
    }
    return (0);
}
