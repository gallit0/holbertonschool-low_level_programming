#include "main.c"


void rev_string(char *s)
{
	char reversed;
	int lenght = strlen(s);
	int i = lenght - 1;

	while (i >= 0)
	{
		reversed[i] = *(s + i);
	}
	for (i = 0; *(s + i) != lenght; i++)
	{
		*(s + i) = reversed[i];
	}
}
