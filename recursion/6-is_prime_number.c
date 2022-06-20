#include "main.h"

/**
 * is_prime_number - checks for prime number n
 * @n: number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
	{
		return (prime(n/n));
	}
}

/**
 * prime - checks for prime number
 * @n: number
 * Return: int
 */

int prime(int i)
{
	if ((i == 1)
		return (1);
	else
		return (0);
}
