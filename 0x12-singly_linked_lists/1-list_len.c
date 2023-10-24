#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			h = h->next;
			count++;
		}

	}
	return (count);
}
