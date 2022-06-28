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
	struct dog_t p;

	p.name = name;
	p.age = age;
	p.owner = owner;
	return (dog_t);
}
