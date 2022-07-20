/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** Function that copies a string into another. The destination string
** will already have enough memory to copy the source string.
*/

#include <stdlib.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (dest == NULL || src == NULL)
        return (NULL);
    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
