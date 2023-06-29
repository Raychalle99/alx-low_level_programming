#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
int capitalize;
/*scan through string */
capitalize = 0;
while (s[capitalize] != '\0')
{/* if next character after capital is char, capitalise it */
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (s[capitalize] == ' ' || s[capitalize] == '\t' || s[capitalize] == '\n'
|| s[capitalize] == ',' || s[capitalize] == ';' || s[capitalize] == '.'
|| s[capitalize] == '"' || s[capitalize] == '!' || s[capitalize] == '?'
|| s[capitalize] == '(' || s[capitalize] == ')' || s[capitalize] == '{'
|| s[capitalize] == '}')
{
if (s[capitalize + 1] >= 97 && s[capitalize + 1] <= 122)
{
s[capitalize + 1] = s[capitalize + 1] - 32;
}
}
capitalize++;
}
return (s);
}
