#include "main.h"

/**
 * factorial - factorial
 * @n: int
 * Return: int
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (n * (n - 1));
}
