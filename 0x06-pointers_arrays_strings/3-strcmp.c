#include "main.h"
/**
 * _strcmp- compares the characters of two strings
 *@s1: first string
 *@s2: second string
*
*Return: -1, 0, 1
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] == s2[i])
			return (0);
		else
			return (1);
		i++;
	}
	return (0);
}
