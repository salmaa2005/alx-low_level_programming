#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers except 2 , 4
 * @void
 *
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
