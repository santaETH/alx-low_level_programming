#include <stdio.h>

/**
 * main - a program thats prints the number if arguments passed to the program.
 * @argc: print the number of arguments
 * @argv: print array of arguments
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	(void) argv;
	printf("%s\n", argc- 1);

	return (0);
}
