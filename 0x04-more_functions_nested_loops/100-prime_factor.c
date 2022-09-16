#include <stdio.h>
#include <math.h>

/**
 * main - finds the prime factors of num and prints the largest
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	int count;

	for (count = (int) sqrt(num); count > 2; count++)
	{
		if (num % count == 0)
		{
			printf("%d\n", count);
			break;
		}
	}
	return (0);
}
