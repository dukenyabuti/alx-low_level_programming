#include "main.h"

/**
 * print_sign - Check main
 * @n: an input number
 * Description: This is the outcome of this function
 * prints + is n is greater than 0
 * prints - if n is less than 0
 * prints 0 if n is equals to 0
 * Return: + - 0
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
