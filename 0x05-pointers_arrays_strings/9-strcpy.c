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
	if (src != '\0')
	{
		*dest = *src;
	}
	return (dest);
}
