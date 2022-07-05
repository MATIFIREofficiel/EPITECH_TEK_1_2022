/*
** EPITECH PROJECT, 2022
** my_evil_str.c
** File description:
** Function should return a pointer to the first
** character of the reversed string.
*/

char *my_evil_str(char *str)
{
    int len = 0;
    int temp = 0;

    for (; str[len] != '\0'; len++);
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len -1 - i];
        str[len - 1 - i] = temp;
    }
    return (str);
}
