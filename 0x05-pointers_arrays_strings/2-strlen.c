#include "main.h"
/**
 *_strlen- return the length of a string
 *@s: the parameter
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i += i;
		i++;
		s++;
	}
	return (i);
}
