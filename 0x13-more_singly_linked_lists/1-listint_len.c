#include "lists.h"
/**
 * listint_len - returns the number of nodes in a linked list
 * @h: list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = o;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
