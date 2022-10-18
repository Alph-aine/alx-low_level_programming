#include "main.h"
/**
  * print_alphabet - Entry point of the program
  *
  * Description: print a-z in lowercase based on the header file provided
  * Return: Aways 0 (succcess)
  */
void  print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
