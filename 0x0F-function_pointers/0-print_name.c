#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: name of the person
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(void)name;
	f = print_name_as_is;
	(*f)("Bob");
	f = print_name_uppercase;
	(*f)("Bob Dylan");
	printf("\n");
	exit(EXIT_SUCCESS);
}
