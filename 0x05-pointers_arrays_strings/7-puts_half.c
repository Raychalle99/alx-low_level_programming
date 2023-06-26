#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: The input string
 * Return: 0
 */

void puts_half(char *str)
{
int length = 0;
int half_string;

while (str[length] != '\0')
{
length++;
}
half_string = length / 2;
if (length % 2 == 1)
half_string++;
while (half_string < length)
{
_putchar(str[half_string]);
half_string++;
}
_putchar('\n');
}
