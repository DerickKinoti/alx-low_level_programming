#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements
 * @x: The array of integers
 * @n: elemets to be printed
 */
void print_array(int *x, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", x[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
