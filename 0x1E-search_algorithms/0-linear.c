#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using linear search.
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: if the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] - [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)
			
			/* Return the index of the value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}

