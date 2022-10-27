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
	int i, j;

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	while (s1[i] <= s2[j])
	{
		if (s1[i] < s2[j])
			return (-1);
		else if (s1[i] == s2[j])
			return (0);
		else
			return (1);
	}
}
