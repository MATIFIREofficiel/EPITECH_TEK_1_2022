/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** Function that returns 1 if the number is prime and 0 if not.
*/

int my_is_prime(int nb)
{
    int div = 0;

    if (nb <= 1)
        return (0);
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0)
            div++;
    }
    if (div == 2)
        return (1);
    return (0);
}
