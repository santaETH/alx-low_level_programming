#include "main.h"

/**
 * get_endianness - pirogram checks the endinness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
