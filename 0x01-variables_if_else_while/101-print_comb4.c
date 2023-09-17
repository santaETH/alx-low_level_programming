#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int z = 0;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && b <= c && a != b && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					z++;
					if (z < 126)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
		z++;
	}
	putchar('\n');
	return (0);
}
