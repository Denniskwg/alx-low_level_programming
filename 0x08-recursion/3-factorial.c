#include "main.h"
/**
 * factorial - finds the factorial of a number
 * @n: number to find the factorial
 * Return: factorial of a number recersively
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
