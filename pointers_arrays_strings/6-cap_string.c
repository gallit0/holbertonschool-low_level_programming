#include "main.h"



char *cap_string(char *str)
{
	int i;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	for (i = 1; str[i] != 0; i++)
	{
		if (str[i - 1] == ' ')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
