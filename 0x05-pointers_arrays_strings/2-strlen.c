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

	for (i = 0; i <= *(s + '1'); i++)
	{
		i += i;
	}
	return (i);
}
