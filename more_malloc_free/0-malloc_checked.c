#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: int
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		return (98);
	}
	return (p);
}
