#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments that recevied.
 * @argc: type int argument
 * @argv: type char argument of string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a1, b2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		a1 = atoi(argv[1]);
		b2 = atoi(argv[2]);
		mul = a1 * b2;
		printf("%d\n", mul);
	}
	return (0);
}
