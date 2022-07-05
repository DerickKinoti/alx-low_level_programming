#include "main.h"

/*
 *_islower-checks for lowercase letters and prints depending on condition
 *@c:character arg
 *Returns:1 and 0 depending on alphabet state
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
