#include "lists.h"
/**
 * free_list - free a list
 * @head: start of lined list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *curr;
while ((current = head) != NULL)
{
head = head->next;
free(curr->str);
free(current);
}
}
