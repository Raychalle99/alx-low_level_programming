#include "main.h"
/*
 * main - prints the last digit of a number
 * descripion: input as an integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld;
	
	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
