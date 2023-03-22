#include "main.h"
/**
 * _abs -  function that computes the absolute value of an integer.
 * @y: the integer that we will computes his absolute value.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int y)
{
	if(y > 0)
	{
		return (1);
	}
	if(y < 0)
	{
		return (-y);
	}
	return (0);
}
