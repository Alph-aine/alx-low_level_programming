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

	len = *(s + 1) - s;
	return (len);
}
