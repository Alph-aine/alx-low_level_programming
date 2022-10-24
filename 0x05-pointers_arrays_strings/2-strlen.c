#include "main.h"
/**
 *_strlen- return the length of a string
 *@s: the parameter
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len  = sizeof(*s) / sizeof(*s[0]);
	return (len);
}
