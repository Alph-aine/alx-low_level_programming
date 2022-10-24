#include "main.h"
/**
 *rev_string-- reverses a strng
 *@s: the stringr
 *
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		s += s[i];
	}
	*s = *s;
}
