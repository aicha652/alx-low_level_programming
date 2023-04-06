#include "main.h"
#include <math.h>
/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: First int
 * @y: second int
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
