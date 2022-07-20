/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** Function that reproduce the behavior of the strcmp function.
*/

static int my_strlen(char const *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    return (len);
}

int my_strcmp(char const *s1, char const *s2)
{
    if (my_strlen(s1) > my_strlen(s2))
        return (1);
    if (my_strlen(s1) < my_strlen(s2))
        return (-1);
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
    }
    return (0);
}
