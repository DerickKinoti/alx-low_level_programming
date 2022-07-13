#include "main.h"

/**
 * string_toupper - changes case of letters
 * @str: string with letters
 * Return: pointer to changes string with case letters
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
