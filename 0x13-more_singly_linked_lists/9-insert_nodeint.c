#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a linked list
 *				at a given position.
 * @head : pointer to the head of the list.
 * @idx  : index of the list where the new node will be added
 *		(indices start at 0).
 * @n    : value for the new node to be added.
 *
 * Return: pointer to the new node,
 *         or NULL - if function fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
