#include "3-calc.h"

/**
 * main - main function
 * @argc: counter to argv
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 4 || (argv[2] != '%' && argv[2] != '*' && argv[2] != '+'))
	{
		printf("Error\n");
		return (0);
	}
	if (argv[2] != '/' && argv[2] != '-')
	{
		printf("Error\n");
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (*get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
