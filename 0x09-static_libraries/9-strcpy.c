#include "main.h"

/**
 * _strcpy - copies tring pointed by src
 * @dest: A buffer to copy the string to
 * @src: A source string to
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
