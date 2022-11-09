#include "main.h"
/**
 *set_string-sets the value of **sto *to
 *@s: the pointer
 *@to: the string
 *
 *return: none
 */
void set_string(char **s, char *to)
{
	int i = 0;

	while (to[i] != '\0')
	{
		s[i] = to[i];
		i++;
	}
	_putchar(**s);
}
