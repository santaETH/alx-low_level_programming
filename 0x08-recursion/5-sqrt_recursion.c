#include "main.h"
#include <stdio.h>

/**
 * funct - function that allow the sqrt of a number.
 * @x: type int sqrt root
 * @y: type int compares x
 * Return: sqrt of a n or -1 doesn't have a natural sqrt
 */

int funct(int x, int y)
{
	int sqrt;

	sqrt = y * y;
	if (sqrt == x)
		return (y);
	else if (sqrt < x)
		return (funct(x, y + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - return the squre root of a number
 * @n: type integer
 * Return: sqrt of a number or  -1
 */

int _sqrt_recursion(int n)
{
	return (funct(n, 1));
}
