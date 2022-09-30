#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 if no arguments 1 If one of the number contains symbols that are
 * not digits
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) || *argv[i] == '0')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
