#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int i;
	int counter = 0;
	int temp;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		temp = s1[i] - s2[i];
		counter += temp;
	}
	return (counter);
}
