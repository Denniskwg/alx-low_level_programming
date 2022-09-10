#include<stdio.h>

/**
 * main - Entry point
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int a;
	int c;
	int d;

	for (a = 0; a < 9; a++)
	{
		for (c = 1; c <= 9; c++)
		{
			for (d = 2; d <= 9; d++)
			{
				if (a != c && c != d && a != d && a < c && c < d)
				{
					putchar(a + '0');
					putchar(c + '0');
					putchar(d + '0');
					if (a < 7)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
