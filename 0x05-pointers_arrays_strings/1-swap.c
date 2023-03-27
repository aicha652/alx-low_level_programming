#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: First Integer
 * @b: Second Integer
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}
