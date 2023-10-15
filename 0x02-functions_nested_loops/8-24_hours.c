#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * @void
 *
 * Return: returns void
 */
void jack_bauer(void)
{
	int mins, hrs;

	for(hrs = 0; hrs <= 23; hrs++)
	{
		for(mins = 0; mins <= 59; mins++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(58);
			_putchar((mins / 10) + 48);
			_putchar((mins % 10) + 48);
		}
	}
}
