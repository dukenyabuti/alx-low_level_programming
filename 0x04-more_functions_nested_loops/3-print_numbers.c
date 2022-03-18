#include "main.h"

/**
 * print_numbers - prints numbers 0 -9 and end with a new line
 *
 * Return: 0-9 and new line
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');

}
