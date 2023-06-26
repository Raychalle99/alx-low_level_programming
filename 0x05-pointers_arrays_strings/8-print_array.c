#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: input array
 * @n: length of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
