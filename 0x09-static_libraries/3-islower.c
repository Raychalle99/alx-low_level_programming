#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 * Return: 1, otherwise 0
 */
int _islower(int c)
{
        if (c >= 97 && c <= 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}