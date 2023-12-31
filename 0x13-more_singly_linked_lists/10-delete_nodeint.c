#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 upon Success, or -1 upon Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		i++;
	}

	return (-1);
}
