#include "main.h"

/**
 * main - prints the name of the program by a new line.
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv[0]);
	return (0);
}
