#include "main.h"
#include <stddef.h>
/**
*_strchr- searches for a character in a string
 *@s: the string
 *@c: the character
 *
 *Return: a pointer to c or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
