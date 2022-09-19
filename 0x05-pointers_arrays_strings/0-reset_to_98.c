#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int 
 * and updates the value it points to to 98
 * *n: the address of the value to be updated
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
