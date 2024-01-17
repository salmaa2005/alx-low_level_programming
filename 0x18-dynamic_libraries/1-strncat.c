/**
 * _strncat - cocatenates two strings
 * @dest: a pointer that points to an array of characters
 * @src: a pointer that points to an array of characters
 * @n: an integer that determines the number of characters to be concatenated
 *
 * Return: returns void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, s_length = 0, d_length = 0;

	while (src[s_length] != '\0')
		s_length++;
	while (dest[d_length] != '\0')
		d_length++;
	for (i = d_length; i < (n + d_length); i++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
		}
		else
			break;
	}
	dest[i] = '\0';
	return (dest);
}
