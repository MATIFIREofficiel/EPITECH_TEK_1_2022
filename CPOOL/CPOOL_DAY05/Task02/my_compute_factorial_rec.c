/*
** EPITECH PROJECT, 2022
** my_compute_factorial_rec.c
** File description:
** Recursive function that returns the factorial
** of the number given as a parameter.
*/

int my_compute_factorial_rec(int nb)
{
    int value = 0;

    if (nb > 12 || nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    value = nb * my_compute_factorial_rec(nb - 1);
    return (value);
}
