/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** Function that returns a number, sent to the function as a string.
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int exp = 1;
    int nb = 0;
    int expect = 0;

    for (i; str[i] != '\0' && str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            exp = exp * -1;
    }
    for (i; str[i] != '\0' && str[i] >= '0' && str[i] <= '9'; i++) {
        expect = expect * 10;
        expect = expect + (str[i] - 48);
        if (expect > 2147483648 || expect < -2147483649)
            return (0);
        nb = expect;
    }
    if (exp == 1 && nb == 2147483648)
        return (0);
    return (nb * exp);
}
