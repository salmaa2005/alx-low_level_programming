#include <stdio.h>
/**
 * _isalpha - checks if the character is an alphabetic character 
 * @c: it's the character to be checked
 *
 * Return: returns 1 if it's an alphabetic character ,otherwise returns 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
