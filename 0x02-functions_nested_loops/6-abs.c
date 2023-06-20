#include "main.h"
/*
 * main - computes the absolute value of an integer
 * Description: inputs a number as an integer
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
