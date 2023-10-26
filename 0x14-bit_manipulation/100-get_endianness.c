#include "main.h"

/**
 * get_endianness - program checks the endinness.
 *
 * This function determines whether the system is big-endian or little-endian.
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
