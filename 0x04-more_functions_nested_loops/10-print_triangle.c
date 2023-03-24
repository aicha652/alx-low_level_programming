#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: print the triangle
 */
void print_triangle(int size)
{
        int i = 1;
        int j;

        if (size > 0)
        {
                if (size == 1)
                {
                        _putchar('#');
                        _putchar('\n');
                }
                else
                {
                        for (; i <= size; i++)
                        {
                                for (j = 1; j <= size;)
                                {
                                        _putchar('#');
                                        j++;
                                }
                                _putchar('\n');
                                continue;
                        }
                }
        }
        else
        {
                _putchar('\n');
        }
}
