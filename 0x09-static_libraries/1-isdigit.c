#include "main.h"

/**
 * _isdigit - a function that checks for number ithin certain range
 * @c: input
 * Return: 1 if c is a number and 0 if other condition is fulfilled
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
