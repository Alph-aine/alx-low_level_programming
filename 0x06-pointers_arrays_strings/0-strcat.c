#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j, len;

	i = 0;
	len = 0;
	while ( dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest += src[j];
	}
	dest[len] = '\0'
	return (dest);
}
