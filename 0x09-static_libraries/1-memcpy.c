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
	 int i;
	 int j;

	i = 0;
	j = 0;
	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
