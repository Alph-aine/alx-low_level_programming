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
	int i, len;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (; ((len < n) && (len < i)); len++)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';
	return (dest);
}
