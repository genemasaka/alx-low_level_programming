#include "lists.h"
/**
 * free_listint2 - frees memory taken up by a linked list
 * @head: A pointer to linked list that is to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
{
return;
}
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
