#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 *
 * Return: if successful retiurns 1, otherwise -1
 */
int _putchar(char c) { return (write(1, &c, 1)); }
