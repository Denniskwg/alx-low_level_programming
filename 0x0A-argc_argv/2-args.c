#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed to the program
 * including its name
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
