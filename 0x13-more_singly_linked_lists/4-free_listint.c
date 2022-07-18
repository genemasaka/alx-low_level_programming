#include "lists.h"
/**
 * free_listint - frees memory taken up by alinked list
 * @head: listint_t linked list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
