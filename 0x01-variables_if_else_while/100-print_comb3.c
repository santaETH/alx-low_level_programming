#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = 0;
	int tens = 0;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
			if (!((ones == tens) || (tens > ones)))
			{
				putchar('\n');
			}
			else
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '8' && tens == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	return (0);
}
