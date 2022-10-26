#include "main.h"
/**
 *_strcpy- copies a stirng form a variable to another
 *@dest: the destination
 *@src: the source
 *
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	len = 0;
	while (*(src + len) != '\0')
	{
		len++;
	}
	for (; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
