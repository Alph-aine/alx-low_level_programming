#include "main.h"
#include <stdio.h>
/**
 *_strpbrk- cheecks for the first match betwee
 *two strings
 *
 *@s: first string
 *@accept: second string
 *Return: the first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = s[i];
				break;
			}
			else
				k = NULL;
		}
	}
	return (k);
}
