#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: string
 */

void print_chessboard(char (*a)[8])
{
	int i, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar(10);
	}
}
