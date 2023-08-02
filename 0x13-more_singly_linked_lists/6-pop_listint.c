#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;
if (head != NULL && *head != NULL)
{
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
}
return data;
}
