/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** a function that returns the square root (if it is a whole number)
** of the number given as argument. If the square root is not a whole
** number, the function should return 0.
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb <= 0)
        return (0);
    for (; i * i != nb; i++) {
        if (i >= nb)
            return (0);
    }
    return (i);
}
