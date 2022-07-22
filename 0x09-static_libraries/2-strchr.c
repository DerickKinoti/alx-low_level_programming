#include "main.h"

/**
 * _strchr - Locates char in string
 * @s: String to be searched
 * @c: Char in string
 * Return: if c is found, pointer and if c is not found, null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
