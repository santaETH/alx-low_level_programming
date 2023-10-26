#include "main.h"

/**
 * get_endianness - program checks the endinness.
 *
 * Return : 0 big endian, 1 is little endian.
 */

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *) &a;
	return (*b);
}
