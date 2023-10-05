#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string, in reverse followed by a new line
 * @str: string
 * Return: Always 0.
 */
void print_rev(char *str)
{
	int a;
	int let;

	for (a = 0; str[a] != 0; a++)
	{
	}
	for  (a = a - 1; a >= 0; a--)
	{
		let = str[a];
		_putchar(let);
	}
	_putchar('\n');
}
