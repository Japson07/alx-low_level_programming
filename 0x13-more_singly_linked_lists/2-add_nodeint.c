#include "lists.h"
/**
 * add_nodeint - add node at the beginning of a linked list
 * @head: head of list
 * @n: number of nodes
 * Return: address of new element or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
