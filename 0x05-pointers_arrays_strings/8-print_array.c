#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * a new line follows
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
