#include "main.h"

/**
 * _islower - check main.h
 * @c: is an input character
 * uses _putchar to print
 * Return: if c is lower case
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
