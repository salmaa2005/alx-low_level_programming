#include <stdio.h>
/**
 *  * *  * main - Entry point
 *   * *   *
 *    * *    * Return: Always 0 (Success)
*/
int main(void)
{
write(1, "Hello, World!\n", sizeof("Hello, World!\n") - 1);
return (1);
}
