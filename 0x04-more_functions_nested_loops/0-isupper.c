#include "main.h"

/**
 * int _isupper - this function checks for uppercase character
 * @c is uppercase returns 1
 *
 * Return: 0.
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else

		return (0);
}
