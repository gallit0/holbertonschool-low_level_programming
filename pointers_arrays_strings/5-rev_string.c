#include "main.c"


void rev_string(char *s)
{
	int lenght = strlen(s);
	int i = lenght - 1;
	char reversed[lenght];

	while (i >= 0)
	{
		reversed[i] = *(s + i);
	}
	for (i = 0; *(s + i) != lenght; i++)
	{
		*(s + i) = reversed[i];
	}
}
