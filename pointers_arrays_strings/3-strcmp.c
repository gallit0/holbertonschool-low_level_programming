#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int i;
	int counter;
	int temp;
	int len = strlen(s1);

	for (i = 0; i < strlen(s1); i++)
	{
		temp = s1[i] - s2[i];
		counter += temp;
	}
	return (counter);
}
