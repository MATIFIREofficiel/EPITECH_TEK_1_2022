/*
** EPITECH PROJECT, 2022
** star.c
** File description:
** Function that displays a star, based on its given size.
*/

int my_putchar(char c);

static void display_low_star(unsigned int size, int res, int space)
{
    int value = 3;
    int i = 1;

    for (int i = 0; i < (res * 2) + space; i++) {
        if (i >= res && (i < res + space - 1 || i < res + 1))
            my_putchar(' ');
        else
            my_putchar('*');
    }
    my_putchar('\n');
    for (int a = size - 1; a > 0; a--, i = 1) {
        i = i + a;
        for (; i < size * value; i++)
            my_putchar(' ');
        my_putchar('*');
        for (; i < (size * value) + a * 2 - 1; i++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
}

static void display_middle_low_star(unsigned int size, int value, int space)
{
    for (int a = 1; a <= size; a++) {
        for (int i = 0; i < 1 + a - 1; i++)
            my_putchar(' ');
        my_putchar('*');
        for (int i = 0; i < ((value * 2) + space) - (1 + a - 1) * 2 - 2; i++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
    for (int a = size - 1; a > 0; a--) {
        for (int i = 0; i < 1 + a - 1; i++)
            my_putchar(' ');
        my_putchar('*');
        for (int i = 0; i < ((value * 2) + space) - (1 + a - 1) * 2 - 2; i++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
    display_low_star(size, value, space);
}

static void display_middle_top_star(unsigned int size)
{
    int value = 3;
    int space = 1;

    if (size > 2)
        space = space * ((size - 1) * 2);
    if (size >= 2)
        value = value + (size - 1) * 2;
    for (int i = 0; i < (value * 2) + space; i++) {
        if (i >= value && (i < value + space - 1 || i < value + 1))
            my_putchar(' ');
        else
            my_putchar('*');
    }
    my_putchar('\n');
    display_middle_low_star(size, value, space);
}

static void display_top_star(unsigned int size)
{
    int value = 3;
    int i = 1;
    int e = 0;

    if (size == 1)
        value++;
    for (int a = 0; a < size; a++, e++) {
        i = i + a;
        for (; i < size * value; i++)
            my_putchar(' ');
        my_putchar('*');
        for (; i < (size * value) + a * 2 - 1; i++)
            my_putchar(' ');
        if (e != 0)
            my_putchar('*');
        my_putchar('\n');
        i = 1;
    }
}

void star(unsigned int size)
{
    int value = 3;

    if (size == 1)
        value++;
    if (size > 0) {
        display_top_star(size);
        display_middle_top_star(size);
        for (int i = 1; i < size * value; i++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    } else
        my_putchar('\n');
}
