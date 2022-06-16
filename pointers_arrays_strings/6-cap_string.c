#include "main.h"



char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i - 1] == 'A')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
