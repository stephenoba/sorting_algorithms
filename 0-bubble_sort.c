#include "sort.h"

/**
 * swap - swap the position of two elements in an array
 * @array: Array
 * @ele_one: first element to swap
 * @ele_two: second element to swap
 */
void swap(int *array, int ele_one, int ele_two)
{
	int temp;

	print_array(array, 10);
	temp = array[ele_one];
	array[ele_one] = array[ele_two];
	array[ele_two] = temp;
	print_array(array, 10);
}

/**
 * bubble_sort - Implementation of the bubble sort algorithm
 * @array: Array of integers to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, size_n;

	if (array && size > 0)
	{
		size_n = size;
		while (size_n > 1)
		{
			for (i = 1; i < size; i++)
			{
				if (array[i - 1] > array[i])
				{
					swap(array, i - 1, i);
					size_n = i;
				}
			}
			size_n = size_n;
			++i;
		}
	}
}
