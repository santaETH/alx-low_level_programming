#include "main.h"
#include <stdio.h>

/**
 * wildcmp -  Compares 2 strings
 * @st1: type char str
 * @st2: type char str wildcmp.
 * Return: 1 if str identical if not 0.
 */
int wildcmp(char *st1, char *st2)
{
	if (*st1 == '\0' && *st2 == '\0')
		return (1);
	if (*st1 == '\0' && *st2 == '*' && *(st2 + 1) != '\0')
		return (0);
	if (*st1 == *st2)
		return (wildcmp(st1 + 1, st2 + 1));
	if (*st2 == '*')
		return (wildcmp(st1, st2 + 1) || wildcmp(st1 + 1, st2));
	return (0);
}
