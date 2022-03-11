#include <stdio.h>

/**
 * main - Prints lowercase alphabets followed by Uppercase alphabets.
 *
 * Return: Always 0 (means success to me)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
