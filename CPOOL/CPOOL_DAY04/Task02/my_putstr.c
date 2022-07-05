/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Function that displays, one-by-one, the characters of a string.
** The address of the string’s first character will be found in the pointer
** passed as a parameter to the function.
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    if (write(1, str, len) == 84)
        return (84);
    return (0);
}
