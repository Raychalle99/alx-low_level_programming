#include "main.h"

/**
 * leet - function that encodes a string
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer of a string
 * Return: pointer s
 */

char *leet(char *s)
{
	int string_length, leet_count;
	char leetletters[] = "aAeEoOtTlL";
	char leetnumbs[] = "4433007711";

	string_length = 0;
	while (s[string_length] != '\0')
	{
		leet_count = 0;
		while (leet_count < 10)
		{
			if (leetletters[leet_count] == s[string_length])
			{
				s[string_length] = leetnumbs[leet_count];
			}
			leet_count++;
		}
		string_length++;
	}
	return (s);
}
