#include "main.h"

/**
 * print_last_digit-function that prints the last digit of a number
 * @n: the interger from which last digit is gotten
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;
	a = n % 10;

	_putchar(a + '0');
}
