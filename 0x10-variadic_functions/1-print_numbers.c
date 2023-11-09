#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers, followed by a new line
* @n: number of integers passed
* @...: the rest of the arguments
* @separator: string to be printed between numbers
*
* Return: returns void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{	printf("%d", va_arg(args, int));
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
