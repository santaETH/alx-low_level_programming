#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - return index place i comparison true, else -1
 * @array: Type int array
 * @size: Pointer size of array
 * @cmp: pointer to function compare value
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
