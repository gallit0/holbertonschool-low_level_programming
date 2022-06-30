#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * @array: array of ints
 * @size: size_t
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	char *p;
	int i;

	if (array == NULL || action == NULL)
		return;
	if (size > strlen(array))
		size == strlen(array);
	p = malloc(size + 1);
	if (p == NULL)
		return;
	for (i = 0; p[i]; i++)
		p[i] = array[i];
	(*action)(p);
}
