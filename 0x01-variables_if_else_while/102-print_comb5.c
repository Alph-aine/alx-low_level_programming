#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : prints combination of two two digits numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for  (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					while (i == '9')
					{
					if (j == '9')
					break;
					}
					if (!((i == '9' && j == '8') && (k ==
									'9' && l
									== '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
