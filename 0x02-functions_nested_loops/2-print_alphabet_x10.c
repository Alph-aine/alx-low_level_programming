#include "main.h"
/**
 * print_alphabet_x10 - A function written in accordance to main.h file
 * Description: prints all the aphabets in lowercase ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a = 'a';

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
