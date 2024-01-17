
/**
 * _memset - fills memory with a constant byte
 * @s: a pointer that points to an array of characters
 * @b: the character to replace
 * @n: an integer that determines the replaced indeces
 * Return: returns a pointer to an array of characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
