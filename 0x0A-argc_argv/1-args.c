#include "main.h"
#include <stdio.h>

/**
 * main - print a number, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
