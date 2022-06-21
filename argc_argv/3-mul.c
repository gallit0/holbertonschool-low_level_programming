#include <main.h>

/**
 * main - print multiplication
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1 if error;
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc < == 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		res *= argc[i];
	}
	printf("%d\n", res);
	return (0);
} 