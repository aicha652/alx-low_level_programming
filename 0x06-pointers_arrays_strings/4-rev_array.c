#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i, j=0;

for (i = n - 1 ; i >= 0 && j < n; i--)
{
	a[j] = a[i];
	j++;
}
printf("%d", a[j]);
}

