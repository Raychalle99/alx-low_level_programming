#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space
 * Return: Always 0
 */

int main(void)
{
int n;
unsigned long fib1 = 0, fib2 = 1, sum;
unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
unsigned long half1, half2;
for (n = 0; n < 92; n++)
{
sum = fib1 + fib2;
printf("%lu, ", sum);
fib1 = fib2;
fib2 = sum;
}
fib1_half1 = fib1 / 10000000000;
fib2_half1 = fib2 / 10000000000;
fib1_half2 = fib1 % 10000000000;
fib2_half2 = fib2 % 10000000000;
for (n = 93; n < 99; n++)
{
half1 = fib1_half1 + fib2_half1;
half2 = fib1_half2 + fib2_half2;
if (fib1_half2 + fib2_half2 > 9999999999)
{
half1++;
half2 %= 10000000000;
}
printf("%lu%010lu, ", half1, half2);
fib1_half1 = fib2_half1;
fib1_half2 = fib2_half2;
fib2_half1 = half1;
fib2_half2 = half2;
}
printf("\n");
return (0);
}
