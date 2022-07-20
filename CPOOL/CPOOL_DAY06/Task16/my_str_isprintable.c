/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** Function that returns 1 if the string passed in parameter only contains
** printable character and 0 otherwise. Return 1 empty string.
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 126) {
        } else {
            return (0);
        }
    }
    return (1);
}
