/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** Function that display one character by one character.
*/

#include <unistd.h>

int my_putchar(char c)
{
    if (write(1, &c, 1) == -1)
        return (84);
    return (0);
}
