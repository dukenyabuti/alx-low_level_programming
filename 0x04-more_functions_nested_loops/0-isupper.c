#include "main.h"

/**
 * _isupper - this function checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if character is upper case, 0 if lowercase
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
