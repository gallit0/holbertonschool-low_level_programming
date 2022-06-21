#include <stdio.h>


int main(int argc, char **argv)
{
	int res = 0;
	int i = 0;

	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
