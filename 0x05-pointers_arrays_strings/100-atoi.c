#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: the pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int digit_found = 0;
while (s[i])
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
digit_found = 1;
}
else if (digit_found)
break;
i++;
}
return (result);
}
