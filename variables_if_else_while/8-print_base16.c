#include <stdio.h>
 /**
  * main - hexadecimal putchar
  * Return: 0
  */

int main(void)
{
	int i = 48;
	
	do {
		putchar(i);
		if (i == 57)
		{
			i = 97;
			continue;
		}
		i++;
	} while (i <= 102);
	putchar(10);
	return (0);
}
