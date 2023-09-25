#include "sort.h"
/**
 * selection_sort - sorts an array by selection sort algorithm
 * @array: the array to be sorted
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	int z, tmp, cmp;
	size_t i, x;

	if (!array || size < 2)
		return;
	for (x = 0; x < size - 1; x++)
	{
		cmp = array[x];
		z = x;
		for (i = x + 1; i < size; i++)
		{
			if (cmp > array[i])
			{
				cmp = array[i];
				z = i;
			}
		}
		if (array[x] != cmp)
		{
			tmp = array[x];
			array[x] = cmp;
			array[z] = tmp;
			print_array(array, size);
		}
	}
}
