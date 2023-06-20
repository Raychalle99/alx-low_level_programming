#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet ten times, in lowercase.
 *
 * Description: This function prints the alphabet in lowercase ten times,
 * each on a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
