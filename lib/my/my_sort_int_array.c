/*
** EPITECH PROJECT, 2019
** my sort in array
** File description:
** sort an integer array in ascending order
*/

void boucle(int *array, int size)
{
    int transit = 0;
    int transit2 = 0;

    for (int i = 0; i < size - 1; i++){
        if (array[i] > array[i + 1]){
            transit = array[i];
            transit2 = array[i + 1];
            array[i] = transit2;
            array[i + 1] = transit;
        }
    }
}

void my_sort_int_array(int *array, int size)
{
    while (size > 0){
        boucle(array, size);
        size--;
    }
}
