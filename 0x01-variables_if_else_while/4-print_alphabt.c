#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : prints aphabets in lowercase without e and q, uses putchar
 * Return: Always 0 (Success)
 */
int main(void)
{	/* body of code*/
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
