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
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++; /*space for null terminator*/

	join = malloc(sizeof(char) * (len1 + len2));
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
		*(join + i) = *(s2 + j);
		i++, j++;
	}
	return (join);
}
