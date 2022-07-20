/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** Function that returns 1 if the string passed in parameter only contains
** uppercase alphabetical characters and 0 otherwise. Return 1 empty string.
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
        } else {
            return (0);
        }
    }
    return (1);
}
