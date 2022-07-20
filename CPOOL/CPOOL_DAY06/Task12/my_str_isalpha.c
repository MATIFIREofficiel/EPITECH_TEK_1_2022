/*
** EPITECH PROJECT, 2022
** my_str_isalpha.c
** File description:
** Function that returns 1 if the string passed in parameter
** only contains alphabetical character and 0 if the string
** contains another type of character. And return 1 if is an empty string.
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z')
            || (str[i] >= 'A' && str[i] <= 'Z')) {
        } else {
            return (0);
        }
    }
    return (1);
}
