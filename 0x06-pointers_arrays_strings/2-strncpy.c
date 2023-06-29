#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number o bytes
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int numbers;

	for (numbers = 0; numbers < n && src[numbers] != '\0'; numbers++)
		dest[numbers] = src[numbers];
	{
		for (; numbers < n; numbers++)
			dest[numbers] = '\0';
	}
	return (dest);
}
