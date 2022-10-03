#include "function_pointers.h"

/**
 * array_iterator - execs function as parameter on each element
 * @array: array
 * @size: size of array
 * @action: pointer to function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
