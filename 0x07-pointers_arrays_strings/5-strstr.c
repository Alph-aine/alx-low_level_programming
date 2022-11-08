#include "main.h"
#include <stdio.h>
/**
 *_strstr- Finds the first occurrence of the substring needle
 *in the string haystack.
 *@haystack: the base string
 *@needle: the small string to be searched for in th first
 *
 *Return: a pointer to the first match
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == s[i])
				return (&needle[j]);
			j++;
		}
		i++;
	}
	return (NULL);
}
