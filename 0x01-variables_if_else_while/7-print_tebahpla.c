#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : prints aphabets in lowercase, uses putcha
 * Return: Always 0 (Success)
 */
int main(void)
{	/* body of code*/
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
