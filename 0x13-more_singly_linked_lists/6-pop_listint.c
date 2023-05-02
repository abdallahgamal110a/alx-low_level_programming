#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: Pointer to the first element in the linked list
 *
 * Return: The Data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *T;
int nm;
if (!head || !*head)
return (0);
nm = (*head)->n;
T = (*head)->next;
free(*head);
*head = T;
return (nm);
}
