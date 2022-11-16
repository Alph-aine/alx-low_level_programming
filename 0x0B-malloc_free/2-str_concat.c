#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat- joins s1 & s2 into a new variable
 *@s1: the first string
 *@s2: the second string
 *
 *Return: a new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int i, j, len;
	int k, l;
	int len1, len2;

	i = j = len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	i++; /*incremented to include null terminator*/
	while (*(s2 + j))
		j++;
	len = len1 + len2;

	join = malloc(sizeof(char) * len);
	if (join == NULL)
		return (NULL);
	k = l = 0;
	while (k < i)
	{
		*(join + k) = *(s1 + k);
		k++;
	}
	while (l < j)
	{
		*(join + l) = *(s2 + l);
		j++;
	}
	*(join + len) = '\0';
	return (join);
}
