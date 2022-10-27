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

	while (n[i] != '\0')
	{
		if (n[i] != ',' || n[i] != ';' || n[i] != '.' || n[i] != '!' ||
				n[i] != '?' || n[i] != '"' || n[i] != '(' ||
				n[i] != ')' || n[i] != '{' || n[i] != '}')
		{
			if (n[i] >= 'a' && n[i] <= 'z')
				n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
