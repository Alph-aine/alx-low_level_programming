#include "main.h"
/**
 *rev_string-- reverses a strng
 *@s: the stringr
 *
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int i, len, temp;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp
	}
}
