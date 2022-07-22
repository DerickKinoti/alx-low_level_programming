include "main.h"

/**
 * _strcat - Concatenates the string
 * @dest: A pointer to concanetaed string
 * @src: Sources string
 * Return: A pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
		int index = 0, dest_len = 0;

		while (dest[index++])
			dest_len++;

		for (index = 0; src[index]; index++)
			dest[dest_len++] = src[index];

		return (dest);
}

