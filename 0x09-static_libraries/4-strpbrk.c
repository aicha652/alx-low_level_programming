#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
char *ch = strpbrk(s, accept);

return (ch);
}
