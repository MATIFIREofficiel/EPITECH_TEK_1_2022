/*
** EPITECH PROJECT, 2022
** my_strcapitalize.c
** File description:
** Function that capitalizes the first letter of each word.
*/

char *my_strcapitalize(char *str)
{
    int separator = 42;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
            separator = 42;
        if (str[i] >= 'a' && str[i] <= 'z' && separator == 42) {
            separator = 0;
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
