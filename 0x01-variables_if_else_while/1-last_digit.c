#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else
		printf("Last digit of %d is %d and is 0\n", n, mod);
	return (0);
}
