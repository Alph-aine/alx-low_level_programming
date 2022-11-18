#include "3-calc.h"
/**
 *op_add- adds
 *@a: first input
 *@b: second input
 *Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub- subtracts
 *@a: first input
 *@b: second input
 *Return: the difference between inputs
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul- multiplies
 *@a: first input
 *@b: second input
 *Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div- divides
 *@a: numerator
 *@b: denominator
 *Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod- returns the remainder of division
 *@a: first input
 *@b: second input
 *Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
