#include "main.h"
/**
 *_strlen- return the length of a string
 *@s: the parameter
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j += i;
		i++;
	}
	return (j);
}
