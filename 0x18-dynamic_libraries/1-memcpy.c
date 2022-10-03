#include "main.h"

/**
 * _memcpy - copies bytes from memory area pointed
 * @dest: pointer to memory area
 * @src: source buffer
 * @n: number of bytes
 * Return: pointet to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
