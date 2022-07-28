#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates mem block
 * @ptr: pointer to mem prev
 * @old_size: size byte, of allocated space of ptr
 * @new_size: new size, in bytes of mem block
 * Return: ptr, if new_size, returns ptr without changes, otherwise null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
