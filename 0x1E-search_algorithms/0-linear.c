#include "search_algos.h"
/**
 * linear_search - search for a value in an array of integer
 * @array: is pointer to first element
 * @size: is number of element the array search
 * @value: value to serch for
 * Return: value or -1 if array is null or no value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("value check array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
