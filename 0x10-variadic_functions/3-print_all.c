#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* -
* @
* @...: the rest of the arguments
*
*
* Return: returns a pointer
*/
#include <stdio.h>
#include <stdarg.h>

void print_all(const char *const format, ...)
{
	va_list args;
	va_start(args, format);
	char c;
	int num;
	float f_num;
	char *str;
	int first = 1;
	const char *ptr = format;
	while (*ptr != '\0')
	{
		c = *ptr;
		if (!first)
			printf(",");
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d", num);
			break;
		case 'f':
			f_num = (float)va_arg(args, double);
			printf("%f", f_num);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		}
		first = 0;
		ptr++;
	}
	va_end(args);
	printf("\n");
}

int main(void)
{
	print_all("cis", 'B', 3, "stSchool");
	return (0);
}

