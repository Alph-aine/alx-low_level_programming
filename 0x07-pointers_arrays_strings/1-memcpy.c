#include "main.h"
/**
 *_memcpy- copies n numbers of bytes from src  to dest
 *@dest:the destination
 *@src:the source
 *@n:the number of bytes to be copied
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	for (j = 0; j < n; j++)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
