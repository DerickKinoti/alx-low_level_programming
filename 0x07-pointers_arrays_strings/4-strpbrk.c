#include "main.h"

/**
 * _strpbrk - Search string for a set of bytes
 * @s: String to be searched
 * @accept: Set of bytes
 * Return: set matches, pointet to be matched byte, if n set matched NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
