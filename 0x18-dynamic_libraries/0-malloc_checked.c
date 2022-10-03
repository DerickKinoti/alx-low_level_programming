#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate mem
 * @b: bytes
 * Return: pointertp allocated mem if fails, status value 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
