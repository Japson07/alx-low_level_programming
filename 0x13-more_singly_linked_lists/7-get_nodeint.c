#include "lists.h"
/**
 * get_nodeint_at_index - rerurns the nth node of linked list
 * @head: head of node
 * @index: node index
 * Return: nth node, null if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
