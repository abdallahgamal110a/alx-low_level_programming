#include "lists.h"
/**
 * Add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head: Pointer to the first node in the list
 * @n: Data to insert in the new node
 *  Return: Pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *NEW;
NEW = malloc(sizeof(listint_t));
if (!NEW)
	return (NULL);
	NEW->n = n;
	NEW->next = *head;
	*head = NEW;
	return (NEW);
}
