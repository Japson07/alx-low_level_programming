#include "lists.h"
/**
 * sum_listint - returns the sum of all elements of linked list
 * @head: head of list
 * Return: the sum of all elements, null if empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
