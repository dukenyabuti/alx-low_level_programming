#include <stdio.h>

/**
 * main - Prints all the alphabets except 'e' and 'q'.
 *
 * Return: Always 0 (means SUCCESS).
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
