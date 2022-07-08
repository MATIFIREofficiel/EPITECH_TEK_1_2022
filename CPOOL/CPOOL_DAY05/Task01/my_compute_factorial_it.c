/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it.c
** File description:
** An iterative function that returns the factorial of the
** number given as a parameter.
*/

int my_compute_factorial_it(int nb)
{
    if (nb > 12 || nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    for (int i = nb - 1; i > 1; i--)
        nb = nb * i;
    return (nb);
}
