#include "function_pointers.h"

/**
 * int_index - pointer to function
 * @array: array of ints
 * @size: int
 * @cmp: pointer to function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		result = (*cmp)(array[i]);
		if (result == 1)
			return (i);
	}
	return (-1);

}
