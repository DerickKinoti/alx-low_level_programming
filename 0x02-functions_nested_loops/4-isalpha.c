#include "main.h"

/**
 * _isalpha-prints based on whether it is uppercase or lowercase
 * @c:character arg
 * Return:return 1 or 0 based on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
