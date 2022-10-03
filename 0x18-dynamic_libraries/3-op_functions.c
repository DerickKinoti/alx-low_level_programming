#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of 2 ints
 * @a: first num
 * @b: second num
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two ints
 * @a: first num
 * @b: second num
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns tje products of two ints
 * @a: first num
 * @b: second num
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns div of two ints
 * @a: first num
 * @b: second num
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gives remainder of div
 * @a: first num
 * @b: second num
 * Return: remainder of division of ints
 */
int op_mod(int a, int b)
{
	return (a % b);
}
