#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int i, j;
	for  ( i = '0'; i < '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

