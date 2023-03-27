#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * @n: integer to be update it's value to 98
 * updates the value it points to to 98
 */
void reset_to_98(int *n)
{
	int p = 98;
	*n = p;
}
