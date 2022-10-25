#include "main.h"
/**
 *rev_string-- reverses a strng
 *@s: the stringr
 *
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int i, last_pos, j;
	char temp;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}

	last_pos = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[last_pos - j];
		s[last_pos - j] = temp;
	}
}
