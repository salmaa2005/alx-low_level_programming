/**
 * _strcat - concatenates two strings
 * @dest: is a pointer to a string
 * @src: is a pointer to a string
 *
 * Return: a pointer to an array of characters
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, s_length = 0, d_length = 0;

	while (dest[d_length] != '\0')
		d_length++;
	while (src[s_length] != '\0')
		s_length++;
	for (i = d_length; i < (s_length + d_length); i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
