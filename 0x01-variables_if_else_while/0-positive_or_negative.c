#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0){
		printf("the number is positive\n");}
	if(n<0){
		printf("the number is negative\n");}
	if(n==0){
		printf("the number is zero\n");}
	return (0);
}
