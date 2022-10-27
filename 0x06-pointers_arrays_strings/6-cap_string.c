#include "main.h"
/**
 *cap_string- capitalise every words in a string
 *@n: the string
 *
 *Return: n
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
		n[0] = n[0] - 32;
	for (i = 0; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (n[i + 1] > 96 && n[i + 1] < 123)
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
	}
	return (n);
}
