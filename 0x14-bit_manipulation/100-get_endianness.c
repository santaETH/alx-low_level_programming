#include "main.h"

/**
 * get_endianness - program checks the endinness.
 * Return : 0 big endian, 1 is little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *b = (char *) &i;

	return (*b);
}
