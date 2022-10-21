#include "main.h"
/**
 *_isupper- A function to check for uppercase letters
 *@c: parameter that takes the argumnet
 *
 * Description: function fpr checking uppercase letters
 * Return: 1 0r 0
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);
}
