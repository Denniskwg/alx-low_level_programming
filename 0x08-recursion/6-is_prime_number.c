#include "main.h"

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: number to check
 * Return: 1 if n is prime 0 if n is not prime
 */
int is_prime_number(int n)
{
	return (func3(n, 2));
}

/**
 * func3 - helper function to find if number is divisible by other
 * numbers other than 0 and itself
 * @n: number to check
 * @i: increment divisor
 * Return: 0 if n is divisible by other numbers other than 0 and itself
 * 1 if n is prime
 */
int func3(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if ((n - i) == 1)
		return (1);
	else
		return (func3(n, i + 1));

}
