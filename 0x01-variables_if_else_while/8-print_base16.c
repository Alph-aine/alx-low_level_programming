#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : prints aphabets in lowercase and upper, uses putchar
 * Return: Always 0 (Success)
 */
int main(void)
{	/* body of code*/
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
