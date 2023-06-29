#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: text representation of first number
 * @n2: text representation of second number
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, len1, len2, carry;

for (len1 = 0; n1[len1] != '\0'; len1++)
	;
for (len2 = 0; n2[len2] != '\0'; len2++)
	;

if (size_r <= len1 || size_r <= len2)
return (0);

carry = 0;
i = len1 - 1;
j = len2 - 1;
k = size_r - 1;
r[k] = '\0';

while (k > 0 && (i >= 0 || j >= 0 || carry != 0))
{
int sum = carry;

if (i >= 0)
sum += n1[i] - '0';

if (j >= 0)
sum += n2[j] - '0';
r[k] = (sum % 10) + '0';
carry = sum / 10;

k--;
i--;
j--;
}
if (k == 0 && (i >= 0 || j >= 0 || carry != 0))
return (0);

if (k == 0)
return (r + 1);

else
return (r + k + 1);
}
