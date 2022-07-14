/*
** EPITECH PROJECT, 2022
** assignement_2.c
** File description:
** Function that display square but following assignement 2.
*/

int my_putchar(char c);

static void display_first_line(int *x, int *y)
{
    if (*x >= 2 && *y >= 2) {
        my_putchar('/');
        for (int i = 1; i + 1 < *x; i++)
            my_putchar('*');
        if (*x > 1)
            my_putchar('\\');
    } else {
        for (int i = 0; i < *x; i++)
            my_putchar('*');
    }
    *y = *y - 1;
    my_putchar('\n');
}

static void display_middle_line(int *x, int *y)
{
    if (*y <= 1) {
        return;
    }
    for (int i = 0; i + 1 < *y; i++) {
        my_putchar('*');
        for (int i = 1; i + 1 < *x; i++)
            my_putchar(' ');
        if (*x > 1)
            my_putchar('*');
        my_putchar('\n');
    }
    *y = 1;
}

static void display_last_line(int *x, int *y)
{
    if (*y != 1)
        return;
    if (*x >= 2) {
        my_putchar('\\');
        for (int i = 1; i + 1 < *x; i++)
            my_putchar('*');
        if (*x > 1)
            my_putchar('/');
    } else {
        for (int i = 0; i < *x; i++)
            my_putchar('*');
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x >= 1 && y >= 1) {
        display_first_line(&x, &y);
        display_middle_line(&x, &y);
        display_last_line(&x, &y);
    } else
        my_putchar('\n');
}
