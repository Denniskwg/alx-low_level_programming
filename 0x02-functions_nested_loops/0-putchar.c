#include "main.h"
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char name[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
