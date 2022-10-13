#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count of our program
 * @argv: pointer to pointer of a string
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result = 0, i, j;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') &&
	(*argv[1] == '0' || *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	result = p(i, j);
	printf("%d\n", result);
	return (0);
}
