#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int i;
	int counter;
	int temp;
	int len = strlen(s1);

	for (i = 0; s1[i] && s2[i]; i++)
	{
		temp = s1[i] - s2[i];
		counter += temp;
	}
	return (counter);
}
