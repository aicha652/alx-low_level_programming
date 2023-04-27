#include "lists.h"
/**
 * print_func - function that prints specific sentence before the main is executed.
 *
 * Return: sentence
 */
void print_before() __attribute__((constructor));
void print_before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
