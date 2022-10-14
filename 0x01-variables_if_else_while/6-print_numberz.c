#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : printsnumbers with putchar
 *  Return: Always 0 (Success)
 */
int main(void)
{	/* body of code*/
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
