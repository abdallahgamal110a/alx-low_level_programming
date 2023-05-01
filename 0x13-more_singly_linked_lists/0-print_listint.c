#include "lists.h"
/**
 * Print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nm = 0;
while (h)
{
	printf("%d\n", h->n);
	nm++;
	h = h->next;
}
return (nm);
}

