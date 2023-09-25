#include "sort.h"
/**
 * bubble_sort - sorts an array in ascending order using bubble sort algorithm
 * @array: the array too be sorted
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, x, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			x = i + 1;
			if (array[i] > array[x])
			{
				tmp = array[i];
				array[i] = array[x];
				array[x] = tmp;
				print_array(array, size);
			}
		}
	}
}
