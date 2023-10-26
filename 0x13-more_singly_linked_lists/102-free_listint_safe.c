#include "lists.h"
#include <stdilb.h>
#include <stdio.h>

/**
 * free_listp2 - frees a linked list.
 * @head: head of a list
 *
 * Return: no return
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
