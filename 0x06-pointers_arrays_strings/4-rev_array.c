nclude "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @r: array in subject
 * @n: elements or integers
 */
void reverse_array(int *r, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = r[n - 1 - index];
		r[n - 1 - index] = r[index];
		r[index] = tmp;
	}
}
