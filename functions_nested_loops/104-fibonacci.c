#include <stdio.h>

/**
 * main - fibonacci
 * @currentNumber - current number to display
 * @previousnumber - previous displayed number
 * @temp - temporal variable
 * @i - iterations
 * Return: 0
 */

int main(void)
{
	unsigned long int currentNumber = 2;
	unsigned long int previousNumber = 1;
	unsigned long int temp;
	int i;

	for (i = 1; i <= 98; i++)
	{
		temp = currentNumber;
		currentNumber = currentNumber + previousNumber;
		previousNumber = temp;
		if (i != 98)
		{
			printf("%lu, ", currentNumber);
		}
		else
		{
			printf("%lu", currentNumber);
		}
	}
	putchar(10);
	return (0);
}
