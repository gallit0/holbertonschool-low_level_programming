#include "3-calc.h"

/**
 * get_op_func - get operation function
 * @s: string
 * @a: int
 * @b: int
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
		{
			printf("%d\n", ops[i].f(a, b);
			return (0);
		}
		i++;
	}
	printf("Error\n");
	return (0);
}
