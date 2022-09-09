#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */


/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >= 1)
	{
		printf("%d is positive\r\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\r\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\r\n", n);
	}
	return (0);
}
