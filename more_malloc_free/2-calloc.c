#include "main.h"

/**
 * _calloc - allocate memory of an array
 * @nmemb: int
 * @size: int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		exit(0);
	p = malloc(nmemb * size);
	if (p == NULL)
		exit(0);
	for (i = 0; i < (size * mnemb); i++)
	{
		p[i] = 0;
	}
	return (p);
}
