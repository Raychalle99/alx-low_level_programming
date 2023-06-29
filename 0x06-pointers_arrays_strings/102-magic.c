#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int i[5];
	int *z;

	i[2] = 1024;
	z = &n;

	*(z + 5) = 98;
	printf("i[2] = %d\n", i[2]);
	return (0);
}
