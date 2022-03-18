#include "main.h"

/**
 * _isdigit - checks wether its a digit
 * @c: is the return digit
 *
 * Return: 1 if its a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);

}
