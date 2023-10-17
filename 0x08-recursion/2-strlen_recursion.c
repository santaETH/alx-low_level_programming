#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @a: type string
 * Return: Always 0.
 */

int _strlen_recursion(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}
	a++;
	return (1 + _strlen_recursion(a));
}
