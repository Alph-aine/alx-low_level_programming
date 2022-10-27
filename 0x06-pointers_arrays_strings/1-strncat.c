#include "main.h"
/**
 *_strncat- concatenates the second parameter to the first with the number
 *characters specified
 *@dest: first parameter
 *@src: second parameter
 *@n: the number of characters to be added
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		for (; i <= n; i++)
		{
			dest[len] = src[i];
			i++;
			len++;
		}
	}
	dest[len] = '\0';
	return (dest);
}
