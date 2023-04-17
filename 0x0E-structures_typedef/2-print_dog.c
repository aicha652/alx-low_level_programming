#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @: struct dog
 * Rteurn: 0
 */
void print_dog(struct dog *d)
{
	/* d = malloc(sizeof(*d)); */

	if (d == NULL)
		exit(0);
	else if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age == 0)
		printf("AGE: (nil)");
	else if (d->owner == NULL)
		printf("OWNER: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n",d->age);
		printf("Owner: %s\n",d->owner);
	}
}
