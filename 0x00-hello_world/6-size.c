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
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("\nSize of an int: %d byte(s)", sizeof(int));
	printf("\nSize of a long int: %d byte(s)", sizeof(long));
	printf("\nSize of a long long int: %d byte(s)", sizeof(long long));
	printf("\nSize of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
