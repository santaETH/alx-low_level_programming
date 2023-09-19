#include "main.h"
#include <stdio.h>

/*
 * print_to_98 - Prints natural number from n to 98.
 * @n: number to starting number.
 *
 * Description: This function takes an integer n as its parameter and prints all natural numbers from n to 98.
 * Return: does not return a value (void).
 */
void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);

}
