#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of integers using interpolation search
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: if the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the valueis located.
 *
 */

#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (l = 0, r = size - 1; r >= 1;)
	{
		i = 1 = (((double) (r - 1) / (array[r] - array[1])) * (value - array[1]));
		if (i < size)
			printf("Value checked array[%ld] - [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
