#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59
 * @void
 *
 * Return: returns void
 */
void jack_bauer(void) {
  int mins, hr;

  for (hr = 0; hr <= 23; hr++) {
    for (mins = 0; mins <= 59; mins++) {
      putchar((hr / 10) + 48);
      putchar((hr % 10) + 48);
      putchar(58);
      putchar((mins / 10) + 48);
      putchar((mins % 10) + 48);
      putchar('\n');
    }
  }
}
