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

	while (*str != '\0')
		len++;

	if (str == NULL)
		return (NULL);
	arr = malloc(sizeof(char) * len);
	if (arr == NULL)
		return (NULL);

	while (i < len)
	{
		*(arr + i) = *(str + i);
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
