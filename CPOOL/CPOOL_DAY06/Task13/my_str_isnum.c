/*
** EPITECH PROJECT, 2022
** my_str_isnum.c
** File description:
** Function that returns 1 if the string passed in parameter only contains
** digits and 0 otherwise. Return 1 if is an empty string.
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
        } else {
            return (0);
        }
    }
    return (1);
}
