#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: pointer to the functions
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	/* f = print_name_as_is;
	(*f)("Bob");
	f = print_name_uppercase;
	(*f)("Bob Dylan");
	exit(EXIT_SUCCESS); */
}
