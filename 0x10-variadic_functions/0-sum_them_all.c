#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* sum_them_all - returns the sum of all its parameters
* @n: an constant
* @...: the rest of the arguments
*
* Return: returns a pointer
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
