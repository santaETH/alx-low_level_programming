#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: input string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}



