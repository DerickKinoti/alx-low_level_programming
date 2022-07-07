#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: input
 *
 * Return: 1 if c is uppercase or other value depending on condition
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
