#include "main.h"
/**
 * _islower - a  function to be passed to a main function in anothe file
 *@c: a parameter
 *
 * Description: checks if a char is lowercase and return 1 otherwise 0
 * Return: 1 or 0
 */
int  _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
