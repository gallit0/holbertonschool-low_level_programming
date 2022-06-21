#include <stdio.h>

/**
 * main - print multiplication
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1 if error;
 */

int main(int argc, char **argv[])
{
	int i;
	int res = 1;
	int number;

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		number = argv[i] - '0';
		res *= number;
	}
	printf("%d\n", res);
	return (0);
 
