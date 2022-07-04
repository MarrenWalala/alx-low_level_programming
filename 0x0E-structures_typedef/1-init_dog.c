#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: a pointer to the struct defined
 * @name: Char input
 * @age: dog age
 * @owner: A char input
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
