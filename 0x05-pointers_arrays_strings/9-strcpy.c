#include "main.h"
/**
 * *_strcpy - function that copies the string
 * @src: the string to be copy
 * @dest: the value to be return
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
size_t i;

for (i = 0; i < strlen(src) && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
for ( ; i < strlen(src); i++)
{
	dest[i] = '\0';
}
return (dest);
}
