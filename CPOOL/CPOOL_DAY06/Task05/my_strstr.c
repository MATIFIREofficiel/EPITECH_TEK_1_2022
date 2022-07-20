/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** Function that reproduce the behavior of the strstr function.
*/

#include <stdlib.h>

static int check_equality(char *str, char const *to_find, int a, int i)
{
    if (to_find[a] == str[i])
        a++;
    return (a);
}

char *my_strstr(char *str, char const *to_find)
{
    int a = 0;

    if (to_find[0] == '\0')
        return (str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (to_find[a] == str[i]) {
            a++;
        } else {
            a = 0;
            a = check_equality(str, to_find, a, i);
        }
        if (to_find[a] == '\0') {
            i = i - (a - 1);
            return (&str[i]);
        }
    }
    return (NULL);
}
