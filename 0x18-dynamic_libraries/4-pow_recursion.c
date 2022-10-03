#include "main.h"

/**
 * _pow_recursion - returns exponent of a number
 * @a: base
 * @b: exponent
 * Return: exponent value
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	else if (b == 0)
		return (1);
	else
		return (a * _pow_recursion(a, b - 1));
}

