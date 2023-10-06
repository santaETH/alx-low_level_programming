#include <stdlib.h>
#include "main.h"

/**
 * mywstr - function that converts words into strings.
 * @words: the words to work on it.
 * @str: the string to work on it.
 * Return: nothing.
 */

void mywstr(char **words, char *str)
{
	int i, j, wstart, wrflag;

	i = j = wrflag = 0;

	while (str[i])

	{
		if (wrflag == 0 && str[i] != ' ')

		{
			wstart = i;
			wrflag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')

		{
			cmyword(words, str, wstart, i, j);
			j++;
			wrflag = 0;
		}

		i++;
	}

	if (wrflag == 1)
	{
		cmyword(words, str, wstart, i, j);
	}

}
