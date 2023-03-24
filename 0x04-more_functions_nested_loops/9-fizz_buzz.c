#include <stdio.h>
/**
 * main - the Fizz-Buzz program
 *
 * Return: 0 Success
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("%d", i);
	}
	printf(" ");
}
printf("\n");
return (0);
}
