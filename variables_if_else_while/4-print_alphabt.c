#include <stdio.h>
/**
 *main - alphabet-qe
 *Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x < 'z'; x++)
	{
		if (x != 'q' || x != 'e')
		{
			putchar(x);
		}
	}
	putchar(10);
	return (0);
}
