#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 * Rteurn: 0
 */
void print_dog(struct dog *d)
{
	/* d = malloc(sizeof(*d)); */

	if (d == NULL)
		exit(0);
	else if (d->name == NULL)
		d->name = "(nil)";
	/* else if (d->age == 0)
		d->age = "(nil)"; */
	else if (d->owner == NULL)
		d->owner = "(nil)";
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
