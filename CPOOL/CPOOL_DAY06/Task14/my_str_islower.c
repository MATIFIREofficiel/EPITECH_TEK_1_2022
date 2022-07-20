/*
** EPITECH PROJECT, 2022
** my_str_islower.c
** File description:
** Function that returns 1 if the string passed in parameter only contains
** lowercase alphabetical characters and 0 otherwise. Returns 1 empty string.
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
        } else {
            return (0);
        }
    }
    return (1);
}
