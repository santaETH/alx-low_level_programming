#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @n: integer to swap
 * @b: integer to swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
