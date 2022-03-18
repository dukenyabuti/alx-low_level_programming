#include "main.h"

/**
 * print_line - prints a straight line
 * @n: The no of _ characters in a line
 *
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
