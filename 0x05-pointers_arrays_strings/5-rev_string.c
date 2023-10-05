#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: input string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int a, b;
	int let;

	for (a = 0; s[a] != 0; a++)
	{
	}
	b = 0;
	a = a - 1;
	while (b < a)
	{
		let = s[a];
		s[a] = s[b];
		s[b] = let;
		b++;
		a--;
	}
}
