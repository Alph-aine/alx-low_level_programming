#include "main.h"
/**
 *_strncpy- copies the second parameter to the first with the number of
 *characters specified
 *@dest: first parameter
 *@src: second parameter
 *@n: the number of characters to be added
 *
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
