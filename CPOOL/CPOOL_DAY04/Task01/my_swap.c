/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** Function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

void my_swap(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}
