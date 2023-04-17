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
		return;
	else if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age == 0)
		printf("Age: (nil)");
	else if (d->owner == NULL)
		printf("Owner: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
