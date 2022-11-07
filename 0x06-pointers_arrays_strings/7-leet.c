#include "main.h"
/**
 *leet- uses a special conditiion
 * @n: the string
 *
 *Return: string
 */
char *leet(char *n)
{
	int i, j;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (n[i] == c1[j])
				n[i] = c2[j];
			j++;
		}
		i++;
	}
	return (n);
}
