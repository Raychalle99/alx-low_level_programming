#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer of array
 * @n: number of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int t, c;

	n = n - 1;
	c = 0;
	while (c <= n)
	{
		t = a[c];
		a[c++] = a[n];
		a[n--] = t;
	}
}
