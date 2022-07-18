#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: A pointer to first element in linked list
 * Return: data stored in the deleted element. 0 if 
 * list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
{
return (0);
}
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
