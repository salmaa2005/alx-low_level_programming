#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - prints a name
* @name: a pointer to an array of chars
* @f: a pointer to a function
*
* Return: returns void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
