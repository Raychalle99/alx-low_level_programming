#include <stdio.h>
/**
 * main - Entry point
 * Description:prints numbers of base 10
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%i", n);
	}
	printf("\n");
	return (0);
}
