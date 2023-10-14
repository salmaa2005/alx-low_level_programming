#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
*/
void more_numbers(void)
{
    int i;

    for (i = 0; i < 15; i++)
    {
        if (i >= 10)
            _putchar(49);
        _putchar(48+ i%10);

    }
    _putchar('\n');
}
