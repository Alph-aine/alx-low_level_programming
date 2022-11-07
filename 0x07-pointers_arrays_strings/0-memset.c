#include "main.h"
/**
 *_memset- replaces characters of a string with a givn character n times
 *@s:  the string
 *@b: the character
 *@n:the number of repetitions
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
