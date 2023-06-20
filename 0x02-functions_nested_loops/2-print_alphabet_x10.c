#include "main.h"

/**
 * main - check the code.
 * 
 * print_alphabet_x10 - prints 10 times the alphabet
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
