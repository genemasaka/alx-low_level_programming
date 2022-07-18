#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a particular index
 * in a linked list
 *@head: The first node in a linked list
 *@index: The index of the node to return
 *Return: pointer to the node. NULL if linked list is empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
