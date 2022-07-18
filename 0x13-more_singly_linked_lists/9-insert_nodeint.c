#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node in linked list
 * @head: A pointer to the first node in linked list
 * @idx: index of the new node
 * @n: data stored in new node
 * Return: A pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
{
return (NULL);
}
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if(i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
{
temp = temp->next;
}
}
return (NULL);
}
