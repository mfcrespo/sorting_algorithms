#include "sort.h"
/**
* bubble_sort - sorts an array of int using Bubble sort
* @array: array to be sorted
* @size: size of the array
* Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	int x = 0, y = 0, z = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
