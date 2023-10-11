#include <stdio.h>
/**
 *  * print_alphabet_x10 - check the code.
 *   *
 *    * Return: Always 0.
*/
void print_alphabet_x10(void)
{
char i;
int s;
for (s = 0; s < 10 ; s++)
{
for (i = 'a' ; i <= 'z' ; i++)
{
printf("%c", i);
}
printf("\n");
}
}
