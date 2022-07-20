/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** Function that copies n characters from a string into another.
** The destination string will already have enough
** memory to contain n characters.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
