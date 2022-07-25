#include "main.h"

/**
 * _memset - Fills first n bytes
 * @s: pointer to memory area
 * @b: character to fill memory area
 * @n: number of bytes
 * Return:pointer to filled memoery area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
