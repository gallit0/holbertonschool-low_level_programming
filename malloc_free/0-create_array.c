#include "main.h"

/**
 * create_array - create an array with size and specific char
 * @size: int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (0);
	str = (char *) malloc(size * sizeof(char) + 1);
	for (; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
