#include "main.h"
#include <stdio.h>
/**
 *_strchr- searches for a character in a string
 *@s: the string
 *@c: the character
 *
 *Return: a pointer to c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		if (s[i] == 0)
			return (NULL);
	}
	return (0);
}
