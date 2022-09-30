#include "main.h"
#include <stdio.h>
/**
 * main - prints the first argument ie program name
 * @argc: number of arguments
 * @argv: list of arguments to main
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
