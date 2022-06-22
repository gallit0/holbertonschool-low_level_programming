#include "main.h"

/**
 * create_array - create an array with size and specific char
 * @size; int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *str;
	if (size == 0)
		return NULL;
	str = malloc(size);
	for (; i < size; i++)
	{
		str[i] = c;
	}
	return NULL;
}
