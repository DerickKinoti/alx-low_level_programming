#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @x: first int
 * @y: second int
 *
 * Return: void
 */
void swap_int(int *x, int *y)
{
	int c;

	c = *x;

	*x = *y;
	*y = c;
}

