#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: int
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	return (&p);
}
