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
	int len1, len2;

	i = j = len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++, len1++;
	i++; /*incremented to include null terminator*/
	while (*(s2 + j))
		j++, len2++;
	len = len1 + len2;

	join = malloc(sizeof(char) * len);
	if (join == NULL)
		return (NULL);
	i = 0, j = 0;
	while (i < len1)
	{
		*(join + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(join + j) = *(s2 + j);
		j++;
	}
	*(join + len) = '\0';
	return (join);
}
