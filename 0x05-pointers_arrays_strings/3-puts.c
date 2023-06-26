#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer to the string
 * Return: String and new line
 */

void _puts(char *str)
{
	int length;

	while (str[length])
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
