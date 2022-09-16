#include <stdio.h>

/**
 * main - finds the prime factors of num and prints the largest
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	int count;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
	}
	printf("%d", count);
	printf("\n");
	return (0);
}
