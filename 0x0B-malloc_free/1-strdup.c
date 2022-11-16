#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup- duplicates str
 *@str: the string to be duplicated
 *
 *Return: arr or NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (*str[i] != '\0')
		len++, i++;

	len++;/* adds null terminator to length*/

	arr = malloc(sizeof(char) * len);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(arr + i) = *(str + i);
		i++;
	}
	return (arr);
}
