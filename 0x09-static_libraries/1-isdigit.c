#include "main.h"
/**
  * _isdigit- Function to read in c
  *@c: the parameter
  *
  *Desription: checks if a number is between 0 and 9
  * Return: 1 or 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
