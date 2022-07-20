/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** Function that reproduce the behavior of the strncmp function.
*/

static int my_strlen(char const *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++);
    return (len);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; s1[i] != '\0' && n != 0; i++, n--) {
        if (s1[i] < s2[i])
            return (s1[i] - s2[i]);
        if (s1[i] > s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
