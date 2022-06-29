#include "dog.h"

/**
 * new_dog - new dog :)
 * @name: name of dog :)
 * @age: age of dog :)
 * @owner: owner of dog :)
 * Return: dog :)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;
	char *new_name;
	char *new_owner;

	d = malloc(sizeof(dog_t));
	if (!d || !name || !owner)
		return (0);

	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!new_name)
	{
		free(d);
		return (0);
	}
	for (i = 0; name[i]; i++)
		new_name[i] = name[i];
	new_name[i] = 0;

	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!new_owner)
	{
		free(d);
		return(0);
	}
	for (i = 0; owner[i]; i++)
		new_owner[i] = owner[i];
	new_owner[i] = 0;

	(*d).name = new_name;
	(*d).age = age;
	(*d).owner = new_owner;
	return (d);
}
