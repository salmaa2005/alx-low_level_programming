#include <stdio.h>
#include <main.h>
/**
* main - prints its name, followed by a new line
* @argc: argument count
* @argv: argument vector
*
* Return: returns void
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
}
