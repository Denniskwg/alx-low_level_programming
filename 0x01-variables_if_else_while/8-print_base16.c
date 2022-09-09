#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c;
	char i;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
