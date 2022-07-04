#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * struct dog - structure for a basic dog
 * @d: An instance of struct dog
 *
 * Description: data structure for a dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
