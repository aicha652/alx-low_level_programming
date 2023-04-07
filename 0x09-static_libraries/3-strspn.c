#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: String
 * @accept: String
 * Return:  the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int len = strspn(s, accept);

return (len);
}
