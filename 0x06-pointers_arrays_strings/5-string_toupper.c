#include "main.h"
/**
 *string_toupper- returns the uppercase of letters
 *@str: the parameter to be passed- string
 *
 *Return: str
 */
char *string_toupper(char *str)
{
	int  i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
