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
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = *src;
		i++;
	}
	return (dest);
}