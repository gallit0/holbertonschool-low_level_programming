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

	if (nmemb == 0 || size == 0)
		exit(0);
	p = malloc(nmemb * size);
	if (p == NULL)
		exit(0);	
}
