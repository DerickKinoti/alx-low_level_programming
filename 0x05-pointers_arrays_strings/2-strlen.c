#include "main.h"

/**
 * _strlen - prints length of string
 * @str: string.
 *
 * Return: string length
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
