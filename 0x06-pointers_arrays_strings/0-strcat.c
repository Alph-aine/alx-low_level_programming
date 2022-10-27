#include "main.h"
/**
 *_strcat- concatenates the second parameter to the first
 *@dest: first parameter
 *@src: second parameter
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
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
		dest += src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
