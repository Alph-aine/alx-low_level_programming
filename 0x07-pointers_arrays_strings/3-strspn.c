#include "main.h"
/**
 *_strspn- check a string for all the characters of the second
 *and returns the numbers of bytes of the second
 *
 *@s: the first string
 *@accept: the second string
 *Return: the number of bytes of second string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == accept[i])
			j++;
		i++;
	}
	return (j);
}
