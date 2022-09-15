#include <stdio.h>

/**
 * main - prints "Fizz" if number is multiple of 3
 * "Buzz" if number is multiple of 5
 * "FizzBuzz" if number is multiple of both 3 and 5
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
		printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
