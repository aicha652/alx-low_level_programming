#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string to be encode
 * Return: string
 */
char *leet(char *str)
{
	size_t i;

	for(i = 0; i < strlen(str); i++)
	{
	       	if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 4;
			printf("%u", str[i]);
		}
	        else if(str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 3;
			printf("%u", str[i]);
		}
	        else if(str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 0;
			printf("%u", str[i]);
		}
		else if(str[i] == 't' || str[i] == 'T')
		{
			str[i] = 7;
			printf("%u", str[i]);
		}
		else if(str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 1;
			printf("%u", str[i]);
		}
		else
		{
			printf("%s",strcat(str[i-1], str[i]));
		}
	}
	printf("%s", str);
	printf("\n");
	return (str);
}
