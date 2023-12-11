#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1 if value is not
 * present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1), mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (array[mid]);
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
