#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse.
 * @a: type string
 * Return: Always 0.
 */
void _print_rev_recursion(char *a)
{
	if (*a != '\0')
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
