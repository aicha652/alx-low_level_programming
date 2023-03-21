/*
 * File 1-alphabet.c
 */

#include "main.h"

/**
 * main - prints alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	return (0);
}
