#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: int
 */

void *malloc_checked(unsigned int b)
{
	int *p = 98;

	p = malloc(b);
	if (p == NULL)
	{
		return (p);
	}
	return (p);
}
