#include <stdlib.h>
#include "main.h"

/**
 * cmyword - creates a word from a string.
 * @words: the words to insert to string.
 * @str: the string to work on it.
 * @start: the start position.
 * @end: the stop position.
 * @index: where to start inserting the new word.
 * Return: nothing.
 */

void cmyword(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	{
		words[index][j] = str[start];
	}

	words[index][j] = '\0';
}
