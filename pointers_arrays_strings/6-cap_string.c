#include "main.h"



char *cap_string(char *)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	return (str);
}
