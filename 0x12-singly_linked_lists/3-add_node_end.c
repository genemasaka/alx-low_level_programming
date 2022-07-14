#include "lists.h"
/**
 * add_node_end - adds new node at end of list_t list
 * @head: start of linked list
 * @str: atring stored in list
 * Return: address of the start
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp, *new;
size_t mchar;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
for (mchar = 0; str[mchar]; mchar++)
	;
new->len = mchar;
new->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (*head);
}
