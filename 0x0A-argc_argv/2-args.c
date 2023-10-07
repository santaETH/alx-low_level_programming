#include <stdio.h>

/**
 * main - prints all argument it recevies.
 * @argc: prints number of argument
 * @argv: prints array of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
