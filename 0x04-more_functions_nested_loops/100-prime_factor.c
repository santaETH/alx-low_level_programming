#include <stdio.h>
/**
 * main - function finds & prints the largest prime factor of a number
 *
 * Return: 0 the largest prime factor of n
 */
int main(void)
{
	long primme = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}

	printf("%ld\n", prime);

	return (0);
}

