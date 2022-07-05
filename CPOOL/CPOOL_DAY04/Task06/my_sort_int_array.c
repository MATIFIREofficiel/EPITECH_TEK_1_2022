/*
** EPITECH PROJECT, 2022
** my_sort_int_array.c
** File description:
** Function that sorts an integer array in ascending order, given a pointer
** to the first element of the array and its size.
*/

void my_sort_int_array(int *array, int size)
{
    int temp = 0;

    for (int i = 0; i + 1 < size; i++) {
        if (array[i] > array[i + 1]) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            i = -1;
        }
    }
}
