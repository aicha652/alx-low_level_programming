#include "main.h"
/*
 * *_strncat - function that concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
size_t dest_len = strlen(dest);
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return dest;
}
