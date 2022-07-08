/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
**  Iterative function that returns the first argument raised to
** the power p, where p is the second argument.
*/

int my_compute_power_it(int nb, int p)
{
    int value = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    for (; p >= 1; p--) {
        value = value * nb;
    }
    return (value);
}
