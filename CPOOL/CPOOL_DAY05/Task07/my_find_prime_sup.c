/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** Function that returns the smallest prime number that is greater than or
** equal to the number given as a parameter.
*/

static int my_is_prime(int nb)
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

int	my_find_prime_sup(int nb)
{
    for (; my_is_prime(nb) != 1; nb++);
    return (nb);
}
