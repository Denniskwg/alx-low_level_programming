#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: pointer to a string
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
