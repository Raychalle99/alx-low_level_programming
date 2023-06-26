#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointing to the string
 * Return: void
 */

void rev_string(char *s)
{
int length, z, half;
char temp;

length = 0;
while (s[length] != '\0')
length++;

z = 0;
half = length / 2;
while (half--)
{
temp = s[length - z - 1];
s[length - z - 1] = s[z];
s[z] = temp;
z++;
}
}
