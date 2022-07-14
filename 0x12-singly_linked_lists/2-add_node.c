#include "lists.h"
/**
 * add_node - adds new node at start
 *of list_t list
 *@head: start of linked list
 *@str: string stored in the list
 *Return: address at the start
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
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
new->next = *head;
*head = new;
return (*head);
}
