#include "lists.h"
#include <stdilb.h>
#include <stdio.h>

/**
 * _ra - reallocate memory for the array of pointer
 * @list: to the old list to append
 * @size: size of the new list always more than old list.
 * @new: new node to add to the list
 *
 * Return; pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *))
		if (newlist == NULL)
		{
			free(list);
			exit(98);
		}
	for
