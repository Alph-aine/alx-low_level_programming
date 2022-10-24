#include "main.h"
/**
 *swap_int- swaps the value of two variables via their memory address
 *@a: first argument variable
 *@b: scond argument var
 *
 *Return: none
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
