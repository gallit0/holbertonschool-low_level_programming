#include "main.h"



char *_strchr(char *s, char c)
{
	char *s1 = s;
	int i = 0;

	while (*s != c)
	{
		++s;
		++i;
	}
	if (*s == c)
	{
		return (s1 + i);
	}
	else
	{
		return (0);
	}
}
