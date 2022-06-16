#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int i;
	int counter = 0;
	int temp;

	if (s1 == s2)
	{
		return (0);
	}
	for (i = 0; s1[i] && s2[i]; i++)
	{
		temp = s1[i] - s2[i];
		counter += temp;
	}
	return (counter);
}
