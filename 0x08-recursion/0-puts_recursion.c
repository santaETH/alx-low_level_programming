#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @a: type int string
 * Return: Always 0.
 */
void _puts_recursion(char *a)
{
	int x = 0;

	if (a[x] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(a[x]);
	a++;
	_puts_recursion(a);
}
