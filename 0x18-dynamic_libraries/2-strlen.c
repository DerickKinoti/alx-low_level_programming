#include "main.h"

/**
 * _strlen - prints length of string
 * @str: string.
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while(*s++)
		len++;

	return (len);
}
