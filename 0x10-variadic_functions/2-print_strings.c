#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - prints strings, followed by a new line
* @separator: a string
* @n:  a constant
* @...: the rest of the arguments
*
*
* Return: returns void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		const char *current_string = va_arg(args, const char *);

		if (current_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_string);
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
