#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
int count = 0;
const listint_t *current = h;

if (current == NULL)
return (0);
else
{
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
}
return (count);
}
