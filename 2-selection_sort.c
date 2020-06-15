#include "sort.h"
/**
* selection_sort - sorts an array of integers in ascending
* order using the Selection sort algorithm
* @array: array of integers
* @size: size of the array
* Return: nothing.
**/

void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j, min = 0, temp = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < (size - 1); i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[min] != array[i])
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
	}
}
