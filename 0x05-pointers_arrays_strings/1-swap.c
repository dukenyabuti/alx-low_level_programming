#include "main.h"

/**
 * swap_int -  a function swaps values of two integers.
 * @a: an inout integer pointer
 * @b: an input integer pointer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
