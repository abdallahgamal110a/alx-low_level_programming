#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: Pointer to the first node in the list
 * @idx: Index where the new node is added
 * @n: Data to insert in the new node
 * Return: Pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int m;
listint_t *N;
listint_t *T = *head;
N = malloc(sizeof(listint_t));
if (!N || !head)
return (NULL);
N->n = n;
N->next = NULL;
if (idx == 0)
{
N->next = *head;
*head = N;
return (N);
}
for (m = 0; T && m < idx; m++)
{
if (m == idx - 1)
{
N->next = T->next;
T->next = N;
return (N);
}
else
T = T->next;
}
return (NULL);
}
