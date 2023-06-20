#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print.
 * Return: no return
 */
void print_times_table(int n)
{
int a, b, product;

if (n < 0 || n > 15)
return;

for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
product = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
if (product < 10)
{
_putchar(' ');
_putchar(' ');
}
if (product < 100)
_putchar(' ');
}
if (product < 10)
{
_putchar(product + '0');
}
else if (product < 100)
{
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
else
{
_putchar(product / 100 + '0');
_putchar((product % 100) / 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}
