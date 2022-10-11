#include "main.h"
/**
 * main - prints the name of the file it was compiled from
 * Return: 0
 */
int main(void)
{
	int i;
	char *p = __FILE__;

	i = 0;
	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
