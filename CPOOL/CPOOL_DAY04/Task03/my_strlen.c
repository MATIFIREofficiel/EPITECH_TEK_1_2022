/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Function that counts and returns the number of characters found
** in the string passed as parameter.
*/

int my_strlen(char const *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    return (len);
}
