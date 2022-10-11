 #include "sort.h"

/**
 * swap - swap elements in array
 * @array: Array
 * @i: first element
 * @j: second element
 * @size: size of Array
 */
void swap(int *array, int i, int j, size_t size)
{
	int t = array[i];

	array[i] = array[j];
	array[j] = t;
	print_array(array, size);
}

/**
 * sort - Sort
 * @array: Array
 * @low: Low
 * @high: High
 * @size: array size
 */
void sort(int *array, size_t low, size_t high, size_t size)
{
	size_t i, j, pivot;

	if (low < high)
	{
		pivot = low;
		i = low;
		j = high;

		while (i < j)
		{
			while (array[i] <= array[pivot] && i < high)
				i++;
			while (array[j] > array[pivot])
				j--;
			if (i < j)
			{
				swap(array, i, j, size);
			}
		}
		swap(array, pivot, j, size);
		sort(array, low, j - 1, size);
		sort(array, j + 1, high, size);
	}
}

/**
 * quick_sort - implementation of quick sort algorithm
 * @array: Array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		sort(array, 0, size - 1, size);
}
