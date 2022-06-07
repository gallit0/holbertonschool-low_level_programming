#include <stdio.h>


int main(void)
{
	int x;
	for (x = 'a'; x < 'z'; x++)
	{
		if (x != 'q' || x != 'e')
		{
			putchar(x);
		}
	}
	putchar(10);
	return 0;
}
