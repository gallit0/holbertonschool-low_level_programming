#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print addition
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1 if error;
 */

int main(int argc, char **argv)
{
	int res = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != ' '; j ++)
		{
			if (isalpha(argv[i][j]) > 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
