#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - dog object
 * @name: string
 * @age: float
 * @owner: string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog_t - dog :)
 * @name: string
 * @age: float
 * @owner: string
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
