#include <stdio.h>
/**
 * main - Entry point
 * Description: possible combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			putchar(n + '0');
			putchar(m + '0');

		if (n != 9 || m != 9);
		{
			putchar(',');
			putchar (' ');
		}
		}
	}

	putchar('\n');
	return (0);
}
