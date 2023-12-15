#include "main.h"
/**
 * _puts - program prints a string to stdout
 * @str: string to br printed
 * _putchar prints a newline
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

