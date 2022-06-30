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

	if (argc < 4)
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op_func(argv[2]);

	return (0);
}
